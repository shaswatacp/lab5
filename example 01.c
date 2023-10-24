//A c program to find the reverse of a number.
#include<stdio.h>
int main()
{
    int n,remainder,reverse=0;
    printf("Enter an integer :  ");
    scanf("%d",&n);

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;

    }
    printf("Reverse=%d",reverse);
    return 0;
}
