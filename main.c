#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int n;
    char res;

    printf("\n\n---------------BEM - VINDO AO JOGO DE ADIVINHACAO ----------------\n\n\n");
    printf("Pressione a tecla 'Enter' para continuar\n");
    getchar();
    do{
        system("cls\n");

        printf("\nEscolha um numero de 0 a 10 para a adivinhacao\n\n");
        scanf("%d", &n);

        srand(time(NULL));

        int nale = rand() % 10;

        printf("O numero gerado aleatoriamente de 0 a 10 foi: %d\n\n", nale);

        if(n == nale)
            printf("Parabens voce acertou!\n");
        else    
            printf("Voce errou!\n\n");

        printf("Deseja tentar novamente? s/n \n\n");
        scanf(" %c", &res);

    }while(res == 's' || res == 'S');

    return 0;

}