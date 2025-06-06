#include <stdio.h>


int torre = 5;
int bispo = 5;
int rainha = 8;

int main(){
  
    printf("Movimento Torre");
    for (int i = 0; i < torre; i++){
        printf("\nDireita");
    }
    printf("\nTorre andou 5 casas para direita");

 
    printf("\n\nMovimento Bispo");
    while (bispo > 0)
    {
        printf("\nCima, Direita");
        bispo--;
    }
    printf("\nBispo andou 5 casas em diagonal");

  
    printf("\n\nMovimento Rainha");
    do
    {
        printf("\nEsquerda");
        rainha--;
    } while (rainha > 0);
    printf("\nRainha andou 8 casas para esquerda");

    return 0;
}
