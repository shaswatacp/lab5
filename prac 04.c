//Write a C program to check whether a number is prime or not.
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter an integer  :  ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not prime number");
    }
    return 0;
}
