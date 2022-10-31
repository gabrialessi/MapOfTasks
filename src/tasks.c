#include <stdio.h>
#include <stdlib.h>

#define MAXN 100000

int N, C, P[MAXN], T[MAXN];

int main()
{
    printf("Inserisci prima N poi C: ");
    scanf("%d %d", &N, &C);
    printf("Inserisci le N cifre:\n");
    for (int i = 0; i < N; i++)
        scanf("%d %d", &P[i], &T[i]);
    for (int i = 0; i < N; i++)
        printf("%d %d\n", P[i], T[i]);
    return 0;
}