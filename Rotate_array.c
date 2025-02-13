#include <stdio.h>

void main() {

    int n, d, j, i, a[10],first;

    printf("Enter number of elements: ");

    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)

        scanf("%d", &a[i]);

    printf("Enter the number of positions to rotate the array: ");

    scanf("%d", &d);

    d = d % n;

    for (i = 0; i < d; i++) {

        first = a[0];

        for (j = 0; j < n - 1; j++)

            a[j] = a[j + 1];

        a[n - 1] = first;

    }

    printf("Array after rotating: \n");

    for (i = 0; i < n; i++)

        printf("%d ", a[i]);

}
