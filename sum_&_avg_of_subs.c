//Find sum and average
#include<stdio.h>
void main()
{
    int i,m[10],n,sum=0;
    float avg;
    printf("Enter number of subjects:");
    scanf("%d",&n);
    printf("Enter %d subjects marks:",n);
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=0;i<n;i++)
    sum=sum+m[i];
    avg=sum/n;
    printf("Sum: %d",sum);
    printf("\nAverage of the student: %f",avg);
}
