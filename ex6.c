#include <stdio.h>

void main() {
    int n ;
do{
    printf("Saisir un entier strictement superieur a 1  ");
    scanf("%d", &n);
}while(n <= 1) ;
    while (n > 1) {
        int somme = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                somme += i;
            }
        }

        n = somme ;
        printf("%d ", n); 
    }
}
