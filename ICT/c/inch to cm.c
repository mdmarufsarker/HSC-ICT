// inch to cm converter
#include<stdio.h>
#include<conio.h>
main()
{
    float cm, inch;
    printf("Enter the inch value");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("%f", cm);
    return 0;
}
