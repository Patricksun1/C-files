#include <stdio.h>


void function(char x[], int y){
    printf("\n Hello %s",x);
    printf("\n You are %d years old", y);
}

int main(){
    char name[25] ;
    int age ;
    printf("What is your name? ");
    fgets(name,25,stdin);
    printf("What is your age? ");
    scanf("%d",&age);
    function (name,age);
    return 0;
}

