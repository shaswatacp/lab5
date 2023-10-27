//Write a program to find LCM of two numbers.
#include<stdio.h>
int main()
{
    int a,b,L;
    printf("Enter two numbers  :  ");
    scanf("%d%d",&a,&b);

    for(L=a>b?a:b;L<=a*b;L++)
    if(L%a==0&&L%b==0)
        break;
    printf("lcm of the number %d",L);
    return 0;


}
