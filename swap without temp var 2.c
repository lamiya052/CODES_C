#include<stdio.h>

int main()
{
double firstNumber, secondNumber, temporaryVariable;
    printf("enter first number");
    scanf("%1f", &firstNumber);

    printf("enter second number");
    scanf("%1f", &secondNumber);
    temporayVariable = firstNumber;
    firstNumber = secondNumber;
    SecondNumber = temporaryVariable;

    printf("\n after swapping first number = %.21f\n", firstNumber);


    return 0;
    }

