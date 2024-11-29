#include <stdio.h>
void main(){
    int h1,m1,h2,m2,sh,sm;
    printf("donner h1 ");
    scanf("%d",&h1);
     printf("donner h2 ");
    scanf("%d",&h2);
     printf("donner m1 ");
    scanf("%d",&m1);
     printf("donner m2  ");
    scanf("%d",&m2);
    sm= m1 + m2;
    sh= h1+ h2 + (sm / 60);
    sm = sm % 60;
    printf("la somme des temps est %d en heurres et %d en minutes ",sh,sm);

}