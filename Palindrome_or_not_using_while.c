//Program to check palindrome or not using while
#include<stdio.h>
void main()
{
    int n,rem,rev,num;
    printf("Enter the number to check palindrome:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==num)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
}
