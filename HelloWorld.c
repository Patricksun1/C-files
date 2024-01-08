#include <stdio.h>



void function(char name[],int age){
    printf("Hello %s",name);
    printf("\nYou are %d years old",age);
}


int main(){
    char name[] = "Bro";
    int age = 18;

function(name,age);

    return 0;
}



