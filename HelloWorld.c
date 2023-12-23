#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("Enter the temperature in Celcius ");
        scanf("%f", &temp);
        temp = (temp*1.8) + 32;
        printf("%f", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temperature in Farenheit ");
        scanf("%f", &temp);
        temp = (temp-32)/1.8 ;
        printf("%f", temp);

    }

    else{
        printf("Please enter valid unit");
    };

    return 0;
}

