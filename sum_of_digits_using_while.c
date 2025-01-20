//Program to calculate sum of digits using while
#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter the number to find sum of digits:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("Sum of digits:%d",sum);
}
