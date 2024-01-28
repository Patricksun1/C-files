


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

#include <stdio.h>
#include <string.h>


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
void sort(int array[],int size){
        for(int j = 0;j<size-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }


void printArray(int array[],int size){
    for(int i =0;i<size;i++){
        printf("%c ",array[i]);
    }
}


int main(){
    int array[] = {'A','a','B','F'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printArray(array,size);

    return 0;
}