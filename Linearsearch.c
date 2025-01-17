//Linear search
#include<stdio.h>
void main()
{
    int i,a[10],n,ele,loc=0,flag=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter search element:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
        if(ele==a[i]){
            loc=i;
            flag=flag+1;
            break;}
    if(flag>0)
        printf("Element %d is found at %d",ele,loc);
    else
        printf("Element not found");
}
