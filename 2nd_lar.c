#include<stdio.h>

void main()

{

    int i,n,j,a[10],lar=0,temp;

    printf("Enter size:");

    scanf("%d",&n);

    printf("Enter %d elements:",n);

        for(i=0;i<n;i++)

            scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)

    {

        for(j=0;j<n-i-1;j++)

        {

            if(a[j]>a[j+1])

            {

                temp=a[j];

                a[j]=a[j+1];

                a[j+1]=temp;

            }

        }

    }

     if(a[i]>lar)

                lar=a[n-3]; //or lar=a[i-2];

    printf("3rd Largest element is %d",lar);

}

