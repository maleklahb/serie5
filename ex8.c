#include<stdio.h>
void main(){
    int a, b, res;
    do{
        printf("donnez a ");
        scanf("%d",&a);
    }while(a < 0);
    do{
        printf("donnez b ");
        scanf("%d",&b);
    }while(b < 0);
    res = 0;

    do{
        if (a % 2 != 0){
            res = res + b;

        }
        a= a / 2;
        b= b * 2;
    }while(a > 0);
    printf("le resultat est %d ",res);
}