// Cheaking the large number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the three int number a b c");
    scanf("%d%d%d",&a,&b,&c);
    if
        (a>b)
    {
        if
            (a>c)
            printf("%d is the large number",a);
        else
            printf("%d is the large number",c);
    }
    else
    {
        if
            (b>c)
            printf("%d is the large number",b);
        else
            printf("%d is the large number",c);
    }
    getch();
}
