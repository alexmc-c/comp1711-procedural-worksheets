#include <stdio.h>

float circleArea (float r){
    float area;
    area = 3.141 * (r * r);
    return area;
}

float sphereVolume (float r){
    float area;
    area = 4.0 * 3.141 * (r*r);
    return area;
}

int str_len(char string[10]){
    int len = 0;
    while (string[len] != '\0'){
        len++;
        printf("Next item: %c\n", string[len]);
    }
    return len;
}


void ex1(){
    printf("Exercise 1: Calcualte Area of a Circle \n");

    float radius;
    printf("Please enter the radius of a cirlce: ");
    scanf("%f", &radius);
    printf("Volume of circle radius %.3f is %.5f\n", radius, circleArea(radius));
}


void ex2(){
    printf("Exercise 2: Calcualte Volume of a Sphere \n");

    float radius;
    printf("Please enter the radius of a sphere: ");
    scanf("%f", &radius);
    printf("Area of sphere radius %.3f is %.5f\n", radius, sphereVolume(radius));
}

void ex3(){
    printf("\nExercise 3: String Length Function\n");

    char string[10];
    printf("Please enter a string: ");
    scanf("%s", string);
    
    printf("Length of string is %d\n", str_len(string));

}
void ex4(){}
void ex5(){}
void ex6(){}
void ex7(){}




int main(){
    int choice;

    printf
    ("Please choose a menu item: \n\
    1: Calcualte Area of a Circle\n\
    2: Calcualte Volume of Sphere\n\
    3: String Length Function\n\
    4: Prime Checker Function\n\
    5: String Concatenation\n\
    6: Arithmetic Calcualtor\n\
    7: Reverse Array\n");

    scanf("%d", &choice);

    while((choice < 1 && choice != -1) || choice > 7)
    {
        printf("Invalid menu choice, please enter an option betweeen 1 and 6: ");
        scanf("%d", &choice);
    } 

    switch (choice)
    {
    
    case -1:
        printf("Exiting program...");
        break;

    case 1: 
        ex1();
        break;
    
    case 2: 
        ex2();
        break;

    case 3: 
        ex3();
        break;

    case 4: 
        ex4();
        break;

    case 5: 
        ex5();
        break;

    case 6:
        ex6();
        break;

    case 7:
        ex7();

    default:
        printf("Error, undefined choice, how did you get here?");
        break;
    }


    return 0;
}