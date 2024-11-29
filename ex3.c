#include <stdio.h>

void main() {
    int m, n, sm, sn, i;


    do {
        printf("Donner n  ");
        scanf("%d", &n);
    } while (n <= 0);


    do {
        printf("Donner m  ");
        scanf("%d", &m);
    } while (m <= 0);


    sn = 0;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sn += i;
        }
        if (sn > m) { 
            break; 
        }
    }

    sm = 0;
    for (i = 1; i <= m / 2; i++) {
        if (m % i == 0) {
            sm += i;
        }
        if (sm > n) { 
            break; 
        }
    }

    if (sn == m && sm == n) {
        printf("%d et %d sont aimables.\n", m, n);
    } else {
        printf("%d et %d ne sont pas aimables.\n", m, n);
    }
}
