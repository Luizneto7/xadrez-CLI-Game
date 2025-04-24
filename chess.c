#include <stdio.h>

void chessPieceMovement(int square, char direction[8])
{
    if (square > 0)
    {
        printf("%s\n", direction);
        chessPieceMovement(square - 1, direction);
    }
}

void bishopMovement(int square)
{
    for (int i = square; i > 0; i--)
    {
        printf("Cima\n");

        for (int j = 0; j < 1; j++)
        {
            printf("Direita\n");
        }
    }
}
void horseMovement(int movesLeft, char firstMove[10], char secondMove[10])
{
    if (movesLeft == 0)
        return;
    printf("\nMovimento 1: %s\n", firstMove);
    printf("\nMovimento 2: %s\n", firstMove);
    printf("\nMovimento 3: %s\n", secondMove);

    horseMovement(movesLeft - 1, firstMove, secondMove);
}

int main()
{
    int i = 1, menuChoice, square;
    char firstMove[20], secondMove[20], direction[8];

    printf("\n\n ******* Bem-Vindo ao Chess CLI Game ******* \n\n");

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
        printf("Quantas casas deseja mover a torre?\n\n");
        scanf("%d", &square);

        printf("Informe a direção da torre: (Direita, Esquerda, Cima ou Baixo) \n");
        scanf("%s", &direction);

        printf("\nMovimentação da torre:\n");
        chessPieceMovement(square, direction);
        printf("\nFim da movimentação da torre.\n");
        break;

    case 2:
        printf("Quantas casas deseja mover o bispo?\n\n");
        scanf("%d", &square);

<<<<<<< HEAD
        do
        {
            printf("Cima, Direita\n");
            i++;
        } while (i <= square);
=======
        printf("\nMovimentação do bispo:\n");
        bishopMovement(square);
        printf("\nFim da movimentação do bispo.\n");
>>>>>>> newBranch

        break;

    case 3:
        printf("Quantas casas deseja mover a rainha?\n\n");
        scanf("%d", &square);
        printf("Informe a direção da rainha: (Direita, Esquerda, Diagonal, Cima ou Baixo) \n");
        scanf("%s", &direction);

        printf("\nMovimentação da rainha:\n");
        chessPieceMovement(square, direction);
        printf("\nFim da movimentação da rainha.\n");

        break;
    case 4:
        printf("Quantas casas deseja mover o cavalo?\n");
        scanf("%d", &square);
        printf("Informe a direção dos dois primeiros movimentos do cavalo: (Direita, Esquerda, Cima ou Baixo) \n");
        scanf("%s", &firstMove);
        printf("\nAgora informe o movimento final do cavalo\n");
        scanf("%s", &secondMove);

        printf("\nMovimentação do cavalo:\n");

        horseMovement(square, firstMove, secondMove);
        printf("\nFim da movimentação do cavalo.\n");

        break;
    case 5:
        printf("Saindo do jogo...\n");
        break;

    default:
        break;
        return 0;
    }
}
