#include <stdio.h>

void main() {
    int a, b, res;

    // Lecture de 'a' avec vérification
    do {
        printf("donnez a : ");
        scanf("%d", &a);
    } while (a < 0);

    // Lecture de 'b' avec vérification
    do {
        printf("donnez b : ");
        scanf("%d", &b);
    } while (b < 0);

    res = 0; // Initialisation du résultat

    // Multiplication russe
    do {
        if (a % 2 != 0) { // Ajouter 'b' si 'a' est impair
            res += b;
        }
        a = a / 2; // Diviser 'a' par 2
        b = b * 2; // Multiplier 'b' par 2
    } while (a > 0); // Répéter tant que 'a' > 0

    // Afficher le résultat
    printf("le resultat est %d\n", res);
}
