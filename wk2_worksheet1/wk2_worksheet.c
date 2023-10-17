#include <stdio.h>

void ex1()
{
    printf("Exercise 1: Positive, Negative or Zero\n");
    
    float num;
    
    printf("Please enter a number: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("\nThe number %g is positive", num);
    }
    else if (num < 0)
    {
        printf("\nThe number %g is negative", num);
    }
    else if (num == 0)
    {
        printf("\nThe number %g is zero", num);
    }
    
}

void ex2()
{
    printf("\nExercise 2: Divisible by 4 & 5\n");
    
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if ((num % 5 == 0) && (num % 4 == 0))
    {
        printf("%d is divisible by 4 and 5", num);
    }
    else
    {
        printf("%d is not divisible by 4 and 5", num);
    }
    
}

void ex3(){
    printf("Exercise 3: Grade checker\n");

    int grade = -1;
    while(grade<0 || grade > 100)
    {
        printf("Please enter a grade between 0 and 100: ");
        scanf("%d", &grade);
    }

    if (grade >= 70)
    {
        printf("Grade %d is a distinction", grade);
    }
    else if (grade >=50)
    {
        printf("Grade %d is a pass", grade);
    }
    else 
    {
        printf("Grade %d is a fail", grade);
    }

}

void ex4(){
    printf("\n\nExercise 4: Temperature validation\n");
    
    int temp;
    printf("Please enter a temperatrue betweeen -10 and 40: ");
    scanf("%d", &temp);

    while(temp < -10 || temp >= 40)
    {
        printf("Invalid temperature, please enter a temperatrue betweeen -10 and 40: ");
        scanf("%d", &temp);
    }

    printf("\n%d is a valid temperature", temp);


}

void ex5(){
    printf("\n\nExercise 5: The menu system worked\n");
}


void ex6(){
    printf("\n\nExercise 6: The input validation loop worked\n");
}

int main(){

    int choice;

    printf
    ("Please choose a menu item: \n\
    1: Positive, Negative or Zero\n\
    2: Divisible by 4 & 5\n\
    3: Grade checker\n\
    4: Temperature Range Validator\n\
    5: Advanced Menu System\n\
    6: Input Validation Loop with Termination Value\n");

    scanf("%d", &choice);

    while((choice < 1 && choice != -1) || choice > 6)
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
        printf("\nBronze Level\n");
        ex1();
        break;
    
    case 2: 
        printf("\nBronze Level\n");
        ex2();
        break;

    case 3: 
        printf("\nSilver Level\n");
        ex3();
        break;

    case 4: 
        printf("\nSilver Level\n");
        ex4();
        break;

    case 5: 
        printf("\n\nGold Level\n");
        ex5();
        break;

    case 6: 
        printf("\n\nGold Level\n");
        ex6();
        break;


    default:
        printf("Error, undefined choice, how did you get here?");
        break;
    }

    return 0;
}
