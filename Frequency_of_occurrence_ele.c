//Frequency of occurrence of the element in an array
#include<stdio.h>
void main()
{
    int i,a[10],n,ele,count=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to check frequency:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
        if(a[i]==ele)
            count++;
    printf("Element %d occurs %d times",ele,count);
}
