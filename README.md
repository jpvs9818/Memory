# Memory

Projeto
Suponha que um sistema tenha um endereço virtual de tamanho entre 16 bits à 32 bits com deslocamento na
página de 256 b à 4 Kb. Escreva um programa que receba um endereço virtual (em decimal) na linha de comando
ou leitura do arquivo addresses.txt faça com que ele produza o número da página e o deslocamento do endereço
fornecido, sendo que essa posição indica qual a posição que será lido do arquivo data_memory.txt.

Seu programa produzirá:

O endereço 19986 contém:
o número da página = 4
o deslocamento = 3602
o Valor lido: 50 (exemplo)

No caso, o número em binário é 0100 1110 0001 0010, sendo que 0100 diz respeito à página e 1110 0001 0010
diz respeito ao deslocamento na página. Você consegue conferir isso com a calculadora do Windows/Linux no
modo programador. Para manipular os números em nível de bit, é recomendado usar os operadores bitwise (bit-
a-bit) da linguagem escolhida. No caso o exemplo apresentado é para 16 bits. No caso de 32 bits, haveria mais
16 bits a esquerda (mais significativo) referentes ao número de páginas, 0000 0000 0000 0000 0100 1110 0001
0010, porém, ainda será traduzido para página 4 e deslocamento 3602.
Escrever este programa exigirá o uso do tipo de dados apropriado para armazenar 16 à 32 bits (short ou int). É
recomendado que você também use tipos de dados sem sinal. Além disso, para endereços de 32 bits deve ser
possível usar paginação hierárquica de 2 níveis mantendo 4 Kb, com cada nível tendo 10 bits de tamanho.

Funcões:

decimalToBinary:

Recebe por parâmetro um array de 16 posições e um valor positivo em decimal para ser transformado da base 10 para
binário representado pelo vetor de 16 posições.

verifica se o valor inserido é 0 e faz um while loop enquanto o valor sendo dividido por 2 for maior que 0.
Ao ser dividido por 2 verifica por meio do operador % se possui resto de divisão sendo este o cálculo para representar
valores binários no vetor.

O resultado do cáculo do operador % possui diversos valores possíveis, porém ao dividir por 2 os valores possíveis sempre
serão 0 ou 1 não sendo necessário nenhuma lógica extra no código para tratar estas exceções.

printBinary:

Escreve os valores do array que representa o valor em binário com o bit mais significativo para a esquerda.

pageNum:

Faz o cálculo de binário para decimal dos últimos 4 bits mais significativos em 16 bits que são os que representam em qual
página estão localizados.

O cálculo para conversão é dis_value(valor final para o retorno da função) += binary[i](posição do vetor com valor de 0 ou 1) * pow(2,i)(potenciação de 2 pelo valor da posição do vetor).


displacement:

Calcula os números binários excluindo os 4 mais significativos que representam o valor da página e retornam apenas o valor dos 8 primeiros valores.

memoryValue: 

Cria uma variável de leitura do arquivo txt ("data_memory.txt") do tipo ifstream(apenas leitura) e busca a linha com o valor do deslocamento que foi
inserido por parâmetro.

Recebe o valor em string e é convertido em um valor "unsigned int".

printValue:

Utiliza outras funções para derminar os valores que serão escritos na tela.

numberChoice:

Função que permite o usuário a escolher valores entre 0 até 32767 (limite do short int).

Autor : João Pedro Vicenzi da Silveira
