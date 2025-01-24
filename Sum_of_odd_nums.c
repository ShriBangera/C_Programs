//Sum of odd numbers
#include<stdio.h>
void main() {
    int n,i,sum=0;
    for(i=1;i<=5;i++){
        printf("Input the %d number: ", i);
        scanf("%d", &n);
        if (n % 2 != 0)
            sum=sum+n;
    }
    printf("Sum of all odd values: %d\n", sum);
}
