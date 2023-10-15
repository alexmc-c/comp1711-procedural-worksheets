#include <stdio.h>

void ex1()
{
    printf("Exercise 1: Array sum\n");
    int array[5]={7,12,412,12,90}, sum=0;

    for (int i=0; i<6; i++){
        sum = sum + array[i];
    }
    printf("Sum of array is: %d\n\n", sum);
    
}

void ex2()
{
    printf("Exercise 2: Array reverse\n");
    int array[5]={7,12,412,12,90}, sum=0;

    for (int i=0; i<6; i++){
        sum = sum + array[i];
    }
    printf("Sum of array is: %d\n\n", sum);
    
}

void ex3(){
    printf("Exercise 3: Maximum Element\n");
    int array[5]={7,12,412,12,90}, greatest=0;

    for (int i=0; i<6; i++){
        if (greatest < array[i]){
            greatest = array[i];
        }
    }
    printf("Highest Value is: %d\n\n", greatest);
}

void ex4(){
    printf("Exercise 4: Array Rotation\n");
    int array[5]={7,12,412,12,90}, temp=0;

    printf("Current array: \n");
    for (int i=0; i<5; i++){
        printf("%d - ", array[i]);
    }

    temp = array[4];
    for (int i=5; i>0; i--){
        array[i]=array[i-1];
    }
    array[0] = temp;

    printf("\nNew array: \n");
    for (int i=0; i<5; i++){
    printf("%d - ", array[i]);
    }

}

void ex5(){
    printf("\n\nExercise 5: Duplicate Element\n");
    int array[6]={7,12,412,12,90,123}, duplicates[6]={}, trial, nextFree=0;

    for (int i=0; i<6; i++){
        trial = array[i];
        printf("\n\nTrial is: %d\n", trial);
        for (int j=0; j<6; j++){
            printf("Compare is: %d\n", array[j]);
            if (trial == array[j] && (j!=i)){
                duplicates[nextFree] = trial;
                nextFree++;
                printf("Duplicate found %d, nextFree: %d\n", trial, nextFree);
            }
        }
    }

    printf("\nDuplicates are: \n");
    for (int i=0; i<6; i++){
        if (duplicates[i] != 0) {
            printf("%d - ", duplicates[i]);
        }
    }
}

void ex6(){
    printf("\n\nExercise 6: Array Concatenation\n");
    int array1[3]={7,12,412}, array2[3]={123,982,14}, array3[6]={}, nextFree=0;

    for (int i=0; i<3; i++){
        array3[nextFree] = array1[i];
        nextFree++;
        array3[nextFree] = array2[i];
        nextFree++;
    }

    printf("\nNew array: \n");
    for (int i=0; i<6; i++){
    printf("%d - ", array3[i]);
    }
}

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();

    return 0;
}
