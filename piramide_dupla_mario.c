#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Solicitar altura até que seja fornecido um valor válido entre 1 e 8
    do
    {
        height = get_int("Altura: ");
    }
    while (height < 1 || height > 8);

    // Loop para construir as linhas da pirâmide
    for (int i = 0; i < height; i++)
    {
        // Espaços em branco à esquerda
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Tijolos esquerda
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Espaço entre as pirâmides
        printf("  ");

        // Tijolos direita
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Nova linha para a próxima linha da pirâmide
        printf("\n");
    }

    return 0;
}
