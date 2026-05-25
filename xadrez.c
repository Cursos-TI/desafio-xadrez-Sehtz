#include <stdio.h>

// Recursividade da torre
void recursivoTorre (int variaveltorre)
{
    if (variaveltorre > 0)
    {
    printf("Movimento: Direita.\n");
    recursivoTorre (variaveltorre - 1);
    }
    
    
}
// Recursividade do bispo
void recursivoBispo (int variavelBispo)
{
    if (variavelBispo > 0)
    {
    printf("Movimento: Cima, direita.\n");
    recursivoBispo (variavelBispo - 1);
    }
    
    
}

// Recursividade da Rainha
void recursivoRainha (int variavelRainha)
{
    if (variavelRainha > 0)
    {
    printf("Movimento: Esquerda.\n");
    recursivoRainha (variavelRainha - 1);
    }
    
    
}




int main()
{

// Desafio: Nível Novato
//Movimentação da peça: "Torre"

//Cabeçalho

printf("\n     ***XADREZ***\n\n");

printf("*Movimentação da peça: Torre*\n\n");

printf("Ponto de partida\n");

//Declaração de variáveis

int torre = 5;

recursivoTorre (torre);

printf("Ponto de Chegada\n");

//Movimentação de 5 casas para a direita.


// Fim do movimento da peça: "Torre".

//=======================================================


//Movimentação da peça: "Bispo"

//Cabeçalho

printf("\n     ***XADREZ***\n\n");

printf("*Movimentação da peça: Bispo*\n\n");

printf("Ponto de partida\n");

//Declaração de variáveis e logica.

//Movimentação de 5 casas na diagonal.

int bispo = 5;

recursivoBispo (bispo);

printf("Ponto de Chegada\n");

// Fim do movimento da peça: "Bispo".
//=======================================================

//Movimentação da peça: "Rainha"

//Cabeçalho

printf("\n     ***XADREZ***\n\n");

printf("*Movimentação da peça: Rainha*\n\n");

printf("Ponto de partida\n");

//Declaração de variáveis e logica.

//Movimentação de 5 casas na diagonal.

int rainha = 8;

recursivoRainha(rainha);

printf("Ponto de Chegada\n");

// Fim do movimento da peça: "Rainha".
//=======================================================

//Movimentação da peça: "Cavalo"

//Cabeçalho

printf("\n     ***XADREZ***\n\n");

printf("*Movimentação da peça: Cavalo*\n\n");

printf("Ponto de partida\n");

//Declaração de variáveis e logica.
//Movimentação de 2 casas para cima e 1 casa para direita.

for (int x = 1, y = 3; x <= y; x++)
{
    if (x < y)
    {
        printf("Movimento Cima\n");
        continue;
    } else {
        printf("Movimento Direita\n");
        break;
    }
    
    
}

printf("Ponto de chegada\n\n");


// Fim do movimento da peça: "Cavalo".
//=======================================================

    

    return 0;
}