#include <stdio.h>
void main(){
    int n, p, i = 0, aux;
do {
        printf("Donner p: ");
        scanf("%d", &p);
    } while (p < 0);
    do {
        printf("Donner n : ");
        scanf("%d", &n);
        
        if (n > p) {
            aux = n; 
            i++;     
        }
    } while (n != 0);

    printf("Le nombre de valeurs est %d\n", i);

}