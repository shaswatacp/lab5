//A program to demonostrate the use of switch case.
#include<stdio.h>
int main()
{
    char ch='B';
    switch(ch)
    {

        case 'A':
        printf("caseA");
        break;

          case 'B':
        printf("caseB");
        break;
          case 'C':
        printf("caseC");
        break;
        default:
            printf("Default ");

    }
    return 0;
}
