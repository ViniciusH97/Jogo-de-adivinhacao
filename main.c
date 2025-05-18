#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int num;
    char resposta;

    printf("\n\n---------------BEM - VINDO AO JOGO DE ADIVINHACAO ----------------\n\n\n");
    printf("Pressione a tecla 'Enter' para continuar\n");
    getchar();
    do{
        system("cls\n");

        printf("\nEscolha um numero de 0 a 10 para a adivinhacao\n\n");
        scanf("%d", &num);

        srand(time(NULL));

        int numero_aleatorio = rand() % 11;

        printf("O numero gerado aleatoriamente de 0 a 10 foi: %d\n\n", numero_aleatorio);

        if(num == numero_aleatorio)
            printf("Parabens voce acertou!\n");
        else    
            printf("Voce errou!\n\n");

        printf("Deseja tentar novamente? s/n \n\n");
        scanf(" %c", &resposta);

    }while(resposta == 's' || resposta == 'S');

    return 0;

}
