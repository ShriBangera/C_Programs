//To check whether the given character is in uppercase or lowercase
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c is in uppercase",ch);
    else if(ch>='a'&&ch<='z')
        printf("%c is in lowercase",ch);
    else
        printf("Given value is not a character",ch);
}
