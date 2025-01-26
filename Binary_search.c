//Binar Search
#include<stdio.h>
void main()
{
    int i,n,a[10],mid,low=0,high,ele;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter search ele:");
    scanf("%d",&ele);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==ele){
            printf("Search element %d is found at index %d\n", ele, mid);
            return;
            }
        else if(a[mid]<ele){
            low=mid+1;}
        else{
            high=mid-1;
            }
    }
    printf("Element not found");
}
