//Write a c program to print day of week name using switch case.
#include<stdio.h>
int main()
{
    int day;
    printf("enter a number :  ");
    scanf("%d",&day);
    switch(day)
    {
        case1:
        printf("sunday");
        break;
             case2:
        printf("monday");
        break;
             case3:
        printf("Tuesday");
        break;
             case4:
        printf("wednesday");
        break;
             case5:
        printf("Thursday");
        break;
             case6:
        printf("Friday");
        break;
             case7:
        printf("Saturday");
        break;
    default:
        printf("invalid week number");
    }
    return 0;
}
