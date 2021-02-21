// cm to inch converter
#include<stdio.h>
#include<conio.h>
main()
{
    float cm, inch;
    printf("Enter the cm value");
    scanf("%f", &cm);
    inch = cm/2.54;
    printf("%f", inch);
    return 0;
}
