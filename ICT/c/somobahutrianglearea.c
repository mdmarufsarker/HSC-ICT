//Area of Isoceles triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,area;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    area  = (b*sqrt(a*a-b*b))/4;
    printf("Area of Isoceles triangle = %.2f sq-meter",area);
    getch();
}
