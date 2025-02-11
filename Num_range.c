#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0||n>80)
        printf("Error\n");
    else if(n<=20)
        printf("Its in range [0, 20]\n");
    else if(n<=40)
        printf("Its in range [21, 40]\n");
    else if(n<=60)
        printf("Its in range [41, 60]\n");
    else
        printf("Its in range [61, 80]\n");
}
