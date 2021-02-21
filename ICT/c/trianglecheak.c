#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("side 1 : ");
    scanf("%f",&a);
    printf("side 2 : ");
    scanf("%f",&b);
    printf("side 3 : ");
    scanf("%f",&c);
    if ((a||b||c)!=0 && (a+b)>c && (b+c)>a && (a+c)>b)
    printf("Triangle");
    else
    printf("Not a triangle");
    getch();
}

