//Largest element in an array
#include<stdio.h>
void main()
{
    int i,a[10],n,lar=a[0];
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            if(a[i]>lar)
                lar=a[i];
    printf("Largest element is %d",lar);
}
