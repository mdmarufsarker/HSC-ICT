//Triangle area calculation
#include<stdio.h>
#include<conio.h>
int main()
{
    float h,x,area;
    printf("Enter the value of x = ");
    scanf("%f",&x);
    printf("Enter the value of h = ");
    scanf("%f",&h);
    area = .5*h*x;
    printf("The area of the triangle is %.2f",area);
    getch();
}
