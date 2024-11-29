#include<stdio.h>
#include<math.h>
void main(){
    int s,n,nb=0;
    do{
        printf("donner n ");
        scanf("%d",&n);
    }while(n<1);
    do{
        s=0;
        while(n==0){
            s=s+pow(n % 10,2);
            n=n/10;
        }
        n=s;
        nb=nb+1;
    }while(n>10);
    if(n==1){
        printf("heureux et son ordre est %d",nb);
    }else{
        printf("pas heureux");
    }

    
}
