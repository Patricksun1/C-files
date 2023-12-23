#include <stdio.h>

int main(){

    char name[25];
    printf("What is your name? ");
    fgets(name,25,stdin); 


    float cost;
    printf("How much did you pay? ");
    scanf("%f",&cost);

    printf("Hello %s ,Thanks for paying $%.2f",name,cost);
}