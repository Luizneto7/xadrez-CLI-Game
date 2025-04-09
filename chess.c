#include <stdio.h>

int main()
{
    int i = 1, menuChoice, square;

    printf("\n\n ******* Bem-Vindo ao Chess CLI Game ******* \n\n");

    do
    {
        printf("Selecione a peça que deseja mover:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Sair do jogo\n\n");
        scanf("%d", &menuChoice);
    } while (menuChoice > 4);

    switch (menuChoice)
    {
    case 1:
        printf("Quantas casas deseja mover a torre?\n\n");
        scanf("%d", &square);

        for (int i = 1; i <= square; i++)
        {
            printf("Direita\n");
        }
        break;

    case 2:
        printf("Quantas casas deseja mover o bispo?\n\n");
        scanf("%d", &square);

        do
        {
            printf("Cima, Direita\n");
            i++;
        } while (i <= square);

        break;

    case 3:
        printf("Quantas casas deseja mover a rainha?\n\n");
        scanf("%d", &square);

        while (i <= square)
        {
            printf("Esquerda\n");
            i++;
        }

        break;
    case 4:
        printf("Saindo do jogo...\n");
        break;

    default:
        break;
    }
}