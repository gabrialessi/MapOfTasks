#include <stdio.h>
#include <stdlib.h>

#define MAXN 10000
#define MAXC 100

int N, C, P[MAXN], T[MAXN];

void sort(int P[], int T[], int N)
{
    int temp_P = P[0];
    int temp_T = T[0];
    for (int i = 0; i < N; i++)
    {
        if (P[i] == -1)
        {
            P[0] = P[i];
            T[0] = T[i];
            P[i] = temp_P;
            T[i] = temp_T;
        }
    }
}

int main()
{
    /*printf("Inserisci prima N poi C: ");
    scanf("%d %d", &N, &C);
    printf("Inserisci le N cifre:\n");
    for (int i = 0; i < N; i++)
        scanf("%d %d", &P[i], &T[i]);
    for (int i = 0; i < N; i++)
        printf("%d %d\n", P[i], T[i]);*/

    N = 5, C = 2;
    int P[5] = {3, 4, 3, -1, 3}, T[5] = {10, 1, 5, 20, 2};
    int max, total = 0;
    int index = P[0];
    for (int i = 1; i < N; i++)
    {
        if (P[i] > index)
        {
            index = P[i];
            total += T[i];
            while (index != -1)
            {
                total += T[index];
                index = P[index];
            }
            printf("%d\n", total);
            
        }
        /*P[i] = -2;
        printf("%d\n", total);
        if (total > max)
            max = total;
        i = 1;*/
    }

    printf("%d\n", max);
    return 0;
}