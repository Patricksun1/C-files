#include <stdio.h>


/*int main(){
    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);
    if(number<0){
        printf("Don't be so negative!");
    }
    else if(number==0){
        printf("You have entered zero");
    }
    else{
        printf("You have entered a positive number.");
    }
    
    return 0;
}
*/

/*int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number>0){
        int i=0;
        while(i<=number){
            printf("%d",i);
            printf("\n");
            i++;
        }
    }
    else{
        int j=0;
        while(j>= number){
            printf("%d",j);
            printf("\n");
            j--;
        }
    }
    return 0;
}
*/


/*int main(){
    int i;
    char string[i];
    printf("Enter a sequence of characters: ");
    scanf("%s",&string);

    int vowels = 0;
    int consonants = 0;
    

    while(i<=len(string)){
        if(string[i] == "a"){
            vowels++;
        }


        else{
            consonants++;
        }

    }

    printf("%d",vowels);
    printf("%d",consonants);


   

    return 0;
}
*/

/*#include <stdio.h>

struct vector {
    int x;
    int y;
    int z;
};

int main(void) {

    //////////////// DO NOT CHANGE ANY OF THE CODE BELOW HERE //////////////////
    struct vector first_vector;
    struct vector second_vector;

    // Scans in vector values from user
    // Carefully read how these scanf's work ~ Try to understand it
    printf("Please enter the values of the first vector (x, y, z): ");
    scanf("%d %d %d", &first_vector.x, &first_vector.y, &first_vector.z);

    printf("Please enter the values of the second vector (x, y, z): ");
    scanf("%d %d %d", &second_vector.x, &second_vector.y, &second_vector.z);

    struct vector sum_vector;
    //////////////// DO NOT CHANGE ANY OF THE CODE ABOVE HERE //////////////////

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE BELOW HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    // TODO: Fill in `sum_vector` by adding each component of `first_vector`
    // and `second_vector`
    sum_vector.x = first_vector.x + second_vector.x;
    sum_vector.y = first_vector.y + second_vector.y;
    sum_vector.z = first_vector.z + second_vector.z;

    ////////////////////////////////////////////////////////////////////////////
    ///////////////////// ONLY WRITE CODE ABOVE HERE ///////////////////////////
    ////////////////////////////////////////////////////////////////////////////

    printf("The resulting sum vector is:\n");
    printf("x: %d\n", sum_vector.x);
    printf("y: %d\n", sum_vector.y);
    printf("z: %d\n", sum_vector.z);
    return 0;
}
*/



/*int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int i=0;
    
    while(i<size){
        int j=0;
        while(j<size){
        printf("(%d,%d)",i,j);    
        j++;
        }
            printf("\n");
            i++;
    }
    


    return 0;
}
*/

/*int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int row = 0;
    
    while(row<size){
        int column = 0;
        while(column<size){
            
        printf("(%d,%d)",row,column);
        column++;
        
        }
        printf("\n");
        row++;
    }


    return 0;
}*/

/*int main(){
    char letter;
    int vowels = 0;
    int consonants = 0;
    printf("Enter a sequence of characters: ");
    scanf("%c",&letter);

    while(letter!='\n'){
    if((letter >= 'a' && letter<= 'z')||(letter >= 'A' && letter <= 'Z')){
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || 
                letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || 
                letter == 'O' || letter == 'U') {
                vowels++;}
        else {consonants++;}
        }
        scanf("%c",&letter);
    }

    
    printf("Number of vowels: %d \n",vowels);
    printf("Number of consonants: %d\n",consonants);

    return 0;
}
*/
/*struct message {
    char letter1;
    char letter2;
    char letter3;
    char letter4;
}

int main(void){
    char input;
    int numbers;
    printf("Message: ");
    scanf("%c",&input);
    printf("Enter numbers to encipher by: ");
    scanf("%d",&numbers);


    return 0;
}
*/

/*int main(){
    char name[25];
    printf("What is your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0){
    printf("You did not enter your name\n");
    printf("What is your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';}

    printf("Hello %s\n",name);
    
    return 0;
}*/
/*
#include <stdio.h>
#include <string.h>


int main(){
int size;
int row = 0;
int column = 0;

printf("Enter size: ");
scanf("%d",&size);

for(int row = 0;row<size;row++){
    for(int column = 0; column<size;column++){
        if(column == row || row == size -column -1){
            printf("*");
        }
/        else{
            printf("-");
        }
     
        }
        printf("\n");

    }



return 0;
}
*/

/*int main(){
    int n;
    char c ="*";
    printf("What number would you like to see: ");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        k* printf("*");
    }
    printf("\n");
    while(n>2){
    if(n%2==0){
        n = n/2;
        for(int i=0;i<n;i++){
        i*printf("*");
        
        }
         printf("\n");
       
    }
    else{
        n = 3*n +1;
        for(int j=0;j<n;j++){
        j*printf("*");
             
    }
        printf("\n");
    }
    }
   
    

    
    return 0;
}*/


/*int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n>0){
    for(int i=0;i<=n;i++){
        printf("%d\n",i);
    }
    }
    else if(n<0){
        for(int j=0;j>=n;j--){
            printf("%d\n",j);
        }
    }



    return 0;
}*/

#include <stdio.h>
/*
int main(){
    int sum;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int n10;
    printf("Enter numbers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

    sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;

    printf("The sum of dice rolls is %d",sum);
    

    return 0;
}*/

/*int main(){

char msg[4];
char ed;
int n1;
int n2;
int n3;
int n4;



printf("Message: ");
scanf("%s",msg);

fflush(stdin);

printf("Would you like to encipher or decipher this message (e/d)? ");
scanf("%c",&ed);


if(ed == 'e'){

printf("Enter numbers to encipher by: ");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

msg[0]= msg[0]+n1;
msg[1]= msg[1]+n2;
msg[2]= msg[2]+n3;
msg[3]= msg[3]+n4;

printf("%s",msg);
}

else if(ed == 'd'){
printf("Enter numbers to decipher by: ");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

msg[0]= msg[0]-n1;
msg[1]= msg[1]-n2;
msg[2]= msg[2]-n3;
msg[3]= msg[3]-n4;

printf("%s",msg);

}

else{
    printf("Invalid response");
}
return 0;
}
*/

/*int is_vowel(char character){
    if(character == 'a' ||
    character == 'e' ||
    character == 'i' ||
    character == 'o' ||
    character == 'u'){
        return 0;
    }
    

}


int main(){
    char character;
    printf("Input: ");
    while(scanf("%c",&character) == 1){

        if(is_vowel(character)!=0){
            printf("%c",character);
        }
    }

    return 0;
}*/


// Prints the first n digits of pi, where n is specified 
// by the user
/*
#include <stdio.h>

#define MAX_DIGITS 10

void print_pi_style(int num_digits);

int main(void) {
    // DO NOT EDIT CODE HERE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    printf("How many digits of pi would you like to print? ");
    int digits;
    scanf("%d", &digits);
    print_pi_style(digits);

    return 0;
    // DO NOT EDIT CODE HERE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

void print_pi_style(int num_digits) {
    // DO NOT CHANGE THIS LINE
    int pi[MAX_DIGITS] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    // TODO: Finish this function below
    int i=0;
   while(i<num_digits){
    if(i==1){
        printf(".");
    }
        printf("%d",pi[i]);
        i++;
    }
}*/
/*
#define MAX 100

void print_array_minmax(int length, int numbers[MAX]);


int main(){
    int num;
    int num_array[MAX] = {};
    printf("How many numbers: ");
    scanf("%d",&num);
    fflush(stdin);
    printf("Please enter numbers: ");
    for(int i=0;i<num;i++){
    scanf("%d",&num_array[i]);
    }

    print_array_minmax(num,num_array);



    return 0;
}

void print_array_minmax(int length, int numbers[MAX]) {
    int index = 0;
    if (length > 0) {
        int minimum = numbers[index];
        int maximum = numbers[index];

        while (index < length) {
            if (numbers[index] < minimum) {
                minimum = numbers[index];
            } else if (numbers[index] > maximum) {
                maximum = numbers[index];
            }
            
            index++;
        }

        printf("Minimum: %d\nMaximum: %d\n", minimum, maximum);
    }
    
    return;
}
*/
/*
#define MAX_LENGTH 100

void minmax(int length,int number_array[MAX_LENGTH]){
int index =0;
int min = number_array[0];
int max = number_array[0];

while(index<length){
if(number_array[index]<min){
   min = number_array[index];
}
else if(number_array[index]>max){
    max =  number_array[index] ;
}
index++;
}
printf("Minimum: %d\nMaximum: %d\n",min,max);
}

int main(){
    int length;
    int number_array[MAX_LENGTH];



    printf("How many numbers: ");
    scanf("%d",&length);
    fflush(stdin);
    printf("Please enter numbers: ");
    for(int i=0;i<length;i++){
    scanf("%d",&number_array[i]);
    }
    minmax(length,number_array);
    return 0;
}
*/
/*
#define MAX 100

void minmax(int length,int num_array[MAX]){
int index = 0;
int min = num_array[index];
int max = num_array[index];

while(index<length){
    if(min>num_array[index]){
        min = num_array[index];
    }
    else if(max<num_array[index]){
        max = num_array[index];
    }
index++;
}

printf("Minimum: %d\nMaximum: %d\n",min,max);

}

int main(){
    int length;
    int num_array[MAX];
    printf("How many numbers: ");
    scanf("%d",&length);
    fflush(stdin);
    printf("Please enter numbers: ");
    for(int i=0;i<length;i++){
    scanf("%d",&num_array[i]);}

    minmax(length,num_array);

    return 0;
}
*/

/*
#define MAX_POINTS 100
struct points{
    double x;
    double y;
};

void print_point(int number_of_points,double x,double y);

int main(){
    struct points point_array[MAX_POINTS];
    int number_of_points;
    int i=0;
    printf("How many points in the shape? ");
    scanf("%d",&number_of_points);
    fflush(stdin);
    printf("Enter points: \n");
    while(i<number_of_points){
    scanf("%lf %lf",&point_array[i].x,&point_array[i].y);
    i++;
    }
    for(int j=0;j<number_of_points;j++){
    print_point(j+1,point_array[j].x,point_array[j].y);
    printf("\n");
    }

    return 0;
}

void print_point(int number_of_points,double x,double y){
    printf("%d: x = %lf, y = %lf",number_of_points,x,y);
}
*/
/*
#define COOKING_TIME 15
#define COOKING_TIME 15
#define PANCAKES_PER_PAN 4

// TODO: Write function prototypes
double divide(double num1,double num2);
int ceiling(double num1);
void print_time(int minutes);



// TODO: Write divide function
double divide(double num1,double num2){
double result = num1/num2;
return result;
}

// TODO: Write ceiling function
int ceiling(double num1){
    int new_num = num1;
    if(new_num<num1){
    int new_num = num1 + 1;
    return new_num;}
    else{
    return num1;}
}

// TODO: Write print_time function
void print_time(int minutes){
int hours = minutes/60;
int mins = minutes - (hours*60);

printf("%d hours and %d minutes",hours,mins);
}

//////////////// vvv DO NOT EDIT MAIN vvv //////////////////

int main(void) {

    printf("How many souffle pancakes do you want to make? ");
    int pancakes;
    scanf("%d", &pancakes);
  
    // for 3 pancakes, we need 2 eggs!
    double eggs_decimal = pancakes * divide(2, 3);
    // but we can't have part of an egg, so lets use ceiling
    int eggs = ceiling(eggs_decimal);

    int sugar_grams = pancakes * 10;
    int flour_grams = pancakes * 8;

    printf("You will need:\n");
    printf("- %d eggs\n", eggs);
    printf("- %dg sugar\n", sugar_grams);
    printf("- %dg flour\n", flour_grams);

    // also using ceiling for frying sessions as if we have 1 pancake left
    // it still needs the same time as full pan of pancakes.
    int frying_sessions = ceiling(divide(pancakes, PANCAKES_PER_PAN));
    int minutes = frying_sessions * COOKING_TIME;

    printf("Frying will take you ");
    print_time(minutes);
    printf(".\n");

    return 0;
}

//////////////// ^^^ DO NOT EDIT MAIN ^^^ //////////////////
*/
#include <math.h>

int main(){
    char operation;
    int square;
    int power_base;
    int power_upper;
    printf("Enter instruction: ");
    scanf(" %c",&operation);
    if(operation == 's'){
        scanf("%d",&square);
        int result = square*square;
        printf("%d\n",result);
    }
    else if(operation == 'p'){
        scanf("%d %d",&power_base,&power_upper);
        int result = 1 ;
        for(int i=0;i<power_upper;i++){
        result = result*power_base; 
        }
        printf("%d\n",result);
    }
    else{
        printf("Please enter valid operation");
    }

    return 0;
}

