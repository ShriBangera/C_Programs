#include<stdio.h>

void main()

{

    int i,j,n,a[10],temp;

    printf("Enter size:");

    scanf("%d",&n);

    printf("Enter %d elements:",n);

    for(i=0;i<n;i++)

            scanf("%d",&a[i]);

    a[n-1]+=1;

    printf("Array after adding one to the last element: \n");

    for (i = 0; i < n; i++)

        printf("%d ", a[i]);

}

