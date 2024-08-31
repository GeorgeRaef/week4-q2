#include <stdio.h>

int main()
{
    int N, M, X;
    int found = 0;

    scanf("%d %d", &N, &M);

    int array[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]); // as array does not accept variable length
        }
    }
    scanf("%d", &X);

    for (int i = 0; i < N && !found; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] == X)
            {
                found = 1;
                break;
            }
        }
    }

    if (found)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }

    return 0;
}