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

Autor : João Pedro Vicenzi da Silveira
