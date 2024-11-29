#include <stdio.h>

 void main() {
    int n, m, max, nbr, i, j, k, l;
    do {
        printf("donner n: ");
        scanf("%d", &n);
    } while (n < 5 || n > 100);

    do {
        printf("donner m: ");
        scanf("%d", &m);
    } while (m < 5 || m > n);

    max = 0;

    for (i = m; i <= n; i++) {
        nbr = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                nbr++;
            }
        }
        if (nbr > max) {
            max = nbr;
        }
    }

    printf("Les nombres ayant le nombre maximal de diviseurs (%d) sont:\n", max);
    for (k = m; k <= n; k++) {
        nbr = 0;
        for (l = 1; l <= k; l++) {
            if (k % l == 0) {
                nbr++;
            }
        }
        if (nbr == max) {
            printf("%d ", k);
        }
    }
}
