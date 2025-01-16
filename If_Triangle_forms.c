//C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
#include <stdio.h>
void main() {
    float a,b,c,per;
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b) {
        per=a+b+c;
        printf("The perimeter of the triangle is: %.2f\n",per);
    } else {
        printf("The values do not form a valid triangle.\n");
    }
}
