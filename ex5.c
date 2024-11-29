#include<stdio.h>
#include <stdlib.h>
void main(){
    int a,b,n,n2;
    do{
        printf("donner n ");
        scanf("%d",&n);
    }while( n < 10 || n > 99 ||( n / 10 == n % 10));
 
 
 do{
    a=n /10;
    b=n % 10;
    n2= b*10+a;
    n=abs(n-n2);
 }while (n !=9 );
 
 printf(", %d", n);
}