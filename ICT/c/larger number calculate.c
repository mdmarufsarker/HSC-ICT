// Enter 3 integer number and calculate the larger number
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter three integer number \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is the largest number",a);
    else if(b>c && b>a)
        printf("%d is the largest number",b);
    else
        printf("%d is the largest number",c);
    return 0;
}
