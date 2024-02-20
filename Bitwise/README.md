## Bitwise Operation

### Lógica Binária

* A Lógica Binária, ou **_Bitwise Operation_**, operam em padrões de bits ou números binários no nível dos bits individuais.

* Essa afirmação significa que as operações de lógica binária são realizadas nos níveis mais baixos de representação de dados em um computador, ou seja, no nível dos bits individuais que compõem números binários.

* Para entender esse conceito melhor, observe os pontos abaixo:
    
    * **Lógica Binária:** A lógica binária é a base do sistema de numeração binário, que é amplamente utilizado na computação. Em um sistema binário, apenas dois dígitos são usados: 0 e 1. Toda a informação em um computador é representada em termos desses dois dígitos.

    * **Operações Bitwise:** As operações bitwise são operações lógicas que são aplicadas a nível de bits individuais. Isso significa que essas operações manipulam diretamente os 0s e 1s que compõem os dados. 
    
        * Elas incluem operações como **"AND" ( & )**, **"OR" ( | )**, **"XOR (OR EXCLUSIVO)" ( ^ )**, **"NOT" negação ( ' ! ' [lógica]  ou ' ~ ' [bitwise] )**,   **"Left shift" deslocamento de bits para a esquerda ( << )** e **"Right shift" deslocamento de bits para a direita ( >> )**.

    * **Manipulação de Dados:** As operações bitwise são usadas para manipular e controlar informações em nível de bit.

    * **Eficiência e Otimização:** As operações bitwise são frequentemente usadas para otimizar o desempenho e a eficiência dos programas, especialmente em sistemas embarcados e programação de sistemas. Elas permitem que os programadores trabalhem diretamente com a representação de dados em nível de bits, o que pode ser essencial para operações de baixo nível.

* Essas operações permitem manipular, testar e modificar dados em seu nível mais fundamental, os bits que compõem os números.

* As operações bitwise são amplamente utilizadas em programação de baixo nível, programação de sistemas, manipulação de hardware e muitos outros cenários.

* São úteis para quando se existe limitação no uso de memória.

* As variáveis dos tipos primitivos que trabalhamos nas linguagens de programação são representadas por bytes.

* A menor quantidade de espaço que uma variável pode ocupar é um byte de memória.

    * É a menor unidade de espaço endereçável que uma CPU pode fazer referência.

* Dando como exemplo uma variável booleana:

    *  Somente tem valores binários (0 - falso ou 1 - verdadeiro).

    * Essa variável booleana deve ocupar apenas um bit, mas na verdade ela ocupa 1 byte (8 bits).
        
        * (0000 0001) -> 1 Byte = 8 Bits

    * Na verdade, essa variável está usando somente 1 bit, com o restante dos bits apenas preenchidos com 0.

    * Logo, isso não é bom para dispositivos que tem uma quantidade limitada de memória.

* O tamanho dos tipos primitivos em bytes pode variar dependendo da linguagem de programação e da arquitetura do sistema em que o programa está sendo executado.

* Na linguagem de programação C/C++, que é frequentemente utilizada como referência, esses são alguns tamanhos comuns para os tipos primitivos:

    * **char** = 1 byte = 8 bits

    * **int** = 4 bytes = 32 bits

    * **float** = 4 bytes = 32 bits

    * **double** = 8 bytes = 64 bits
    
    * **short** = 2 bytes = 16 bits

    * **long** = 4/8 bytes = 32/64 bits

    * **long long** = 8 bytes = 64 bits


### Operadores Bit-a-Bit

#### ' & ' (AND)

* aaa


#### ' | ' (OR)

* aaa


#### ' ^ ' (XOR)

* aaa


#### ' ! ' (NOT Lógico) e ' ~ ' (NOT Bitwise)

* aaa


#### ' << ' (Left shift)

* aaa


#### ' >> ' (Right shift)

* aaa