//To create a simple calculator by switch operator.
#include<stdio.h>
int main()
{
    char op;
    double num1,num2;
    printf("enter a character  :");
    scanf("%c",&op);

    printf("enter two numbers :  ");
    scanf("%lf%lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%lf+%lf=%lf",num1,num2,num1+num2);
        break;
        case '-':
        printf("%lf-%lf=%lf",num1,num2,num1-num2);
        break;
        case '*':
        printf("%lf*%lf=%lf",num1,num2,num1*num2);
        break;
        case '/':
        printf("%lf/%lf=%lf",num1,num2,num1/num2);
        break;
        default:
            printf("invalid operator");
    }
    return 0;
    }

