```
#define MAXN 10000 
int N, C, P[], T[]
```
- max path:
```
/*
max() {
    int max = total = 0;
    for (i < N) {
        if (P[i] == -1) {
            for (j < N) {
                if (j == i)
            }
        }
    }
}
*/

max() {
    int max = total = 0;
    int index = P[0];
    for (i < N) {
        if (P[i] > index) index = P[i];

    }
}

```
- build graph:
```
sort() {
    sorted[N][N];
    for (i < N)
        if (P[i] == -1)
            sorted[0][P[i]] = ;
        else if ()
}

develop graph

...

return minumum numbers of hours
```

Approccio greedy: 

- Trovare i nodi foglia

- Calcolare i cammini partendo da ciascun nodo foglia arrivando alla radice

- Eliminare i nodi più pesanti dal cammino più pesante