//A c program to demonostrate the use of break statement.
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d",i);
        if(i==6)
        break;
    }
    printf("came outside of the loop i=%d",i);
}
