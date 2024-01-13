


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

int main(){
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int i = 0;
    int j = 0;

    while(i<size){
    printf("\n(%d,%d)",i,j);    
    i++;
        while(j<size){  
        printf("(%d,%d)",i,j);    
        j++;
        }
    }

    return 0;
}