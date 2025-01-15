//To check whether the given character is a alphabet or a digit or a special character
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is an alphabet",ch);
    else if(ch>='0'&&ch<='9')
        printf("%c is a digit",ch);
    else
        printf("%c is a special character",ch);
}
