#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("What is the radius of the circle? ");
    scanf("%lf",&radius);

    circumference = 2*PI*radius;
    area = PI*pow(radius,2);

    printf("circumference:%lf",circumference);
    printf("area: %lf",area);

   return 0;
}

