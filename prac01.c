//A c program to check whether a number is palindrome or not .
#include<stdio.h>
int main()
{
    int n,c,r,s=0;
    printf("Enter any integer : ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=r+(s*10);
        n=n/10;

    }
    if(c==s)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
