//centigrade to farenhyte convert
#include<stdio.h>
#include<conio.h>
main()
{
    float c,f;
    printf("Enter centigrade temp. :");
    scanf("%f",&c);
    f = 9*c/5+32;
    printf("The value of farenheit temp. is = %.3f  ",f);
    getch();
}
