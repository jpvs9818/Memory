#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <fstream>
using namespace std;
const int architecture = 16; // computer architecture bits number

void decimalToBinary(unsigned short int number,unsigned int binary[architecture]){
    if (number != 0){
        int index = 0;
        while(number > 0){
            int remainder = number % 2;
            binary[index] = remainder;
            index++;
            number /= 2;
        }
    }
}
void printBinary(unsigned int binary[architecture]) {
    int cont = 0;
    for (int i = architecture - 1; i >= 0; i--) {
        std::cout << binary[i] << " ";
        cont++;
        if (cont == 4) {
            std::cout << " ";
            cont = 0;
        }
    }
}
unsigned int pageNum(unsigned int binary[architecture]){
   unsigned int page_value = 0;
    int cont = 0;
    for(int i = architecture - 4; i < architecture; i++){
        page_value += binary[i] * pow(2,cont);
        cont++;
    }
    return page_value;
}

unsigned int displacement(unsigned int binary[architecture]){
    unsigned int dis_value = 0;
    for(int i = 0; i < architecture - 4; i++){
        dis_value += binary[i] * pow(2,i);
    }
    return dis_value;
}
unsigned int memoryValue(unsigned int dis){
    ifstream archive;
    string string_value = "0";
    string trash = "";
    int return_value = 0;
    int cont = 0;
    archive.open("data_memory.txt");
    while (!archive.eof()){
        if(cont != dis){
            getline(archive,trash);
        }
        if(cont == dis-2){
            getline(archive,string_value);
            return_value = stoi(string_value);
            break;
        }
        cont++;
    }
    archive.close();
    return return_value;

}
void printValue(unsigned int binary[architecture], int x){
   unsigned int page = pageNum(binary);
   unsigned int dis = displacement(binary);
   unsigned int data_value = memoryValue(dis);
   cout << "O endereco " << x << " contem: " << endl
   << "numero de pagina = " << page << endl
   << "deslocamento = " << dis << endl
   << "Valor lido : " << data_value;
}

int main() {
    unsigned short int number = 78;
    unsigned int binary[architecture] = {0};

        decimalToBinary(number, binary);
        printBinary(binary);
        cout << endl;
        printValue(binary,number);

    return 0;
}