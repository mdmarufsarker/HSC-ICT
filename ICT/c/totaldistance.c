//Total diatance (s=vt)
#include<stdio.h>
#include<conio.h>
int main()
{
    float v,t,s;
    printf("Enter the value of v = ");
    scanf("%f",&v);
    printf("Enter the value of t = ");
    scanf("%f",&t);
    s = v*t;
    printf("Distance = %.2f meter",s);
    getch();
}

