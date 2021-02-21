#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float r,a;
    printf("Enter radius of the circle :");
    scanf("%f",&r);
    a = PI*r*r;
    printf("The area of circle is %.2f",a);
    return 0;
    getch();
}


