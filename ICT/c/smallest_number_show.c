//Calculate the smallest number
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("Enter two integer numbers\n");
    scanf("%d%d",&a,&b);
    if((a>0)&&(b>0))
    {
        if (a>b)
        printf("%d is the smallest number\n",b);
        else
        printf("%d is the smallest number\n",a);
    }
    else
        printf("Invalid Number");
    getch();
    return 0;
}
