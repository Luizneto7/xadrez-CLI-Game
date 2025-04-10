#include <stdio.h>

int main()
{
    int i = 1, menuChoice, square;
    char firstHorseMove[20], lastHorseMove[20];

    printf("\n\n ******* Bem-Vindo ao Chess CLI Game ******* \n");

    do
    {
        printf("Selecione a peça que deseja mover:\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair do jogo\n\n");
        scanf("%d", &menuChoice);
    } while (menuChoice > 5);

    switch (menuChoice)
    {
    case 1:
        printf("Quantas casas deseja mover a torre?\n");
        scanf("%d", &square);

        for (int i = 1; i <= square; i++)
        {
            printf("Direita\n");
        }
        break;

    case 2:
        printf("Quantas casas deseja mover o bispo?\n");
        scanf("%d", &square);

        do
        {
            printf("Direita\n");
            i++;
        } while (i <= square);

        break;

    case 3:
        printf("Quantas casas deseja mover a rainha?\n");
        scanf("%d", &square);

        while (i <= square)
        {
            printf("Esquerda\n");
            i++;
        }

        break;
    case 4:
        printf("Informe a direção dos dois primeiros movimentos do cavalo: (Direita, Esquerda, Cima ou Baixo) \n");
        scanf("%s", &firstHorseMove);
        printf("\nAgora informe o movimento final do cavalo\n");
        scanf("%s", &lastHorseMove);

        i = 1;

        while (i--)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%s\n", firstHorseMove);
            }

            printf("%s\n", lastHorseMove);
        }

        break;
    case 5:
        printf("Saindo do jogo...\n");
        break;

    default:
        break;
    }
}