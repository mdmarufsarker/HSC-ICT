//1.5+2.5+3.5+.....+n dharar addition nirnoy
#include<stdio.h>
#include<conio.h>
main()
{
    float n,i;
    float s=0;
    printf("Enter the value of n ");
    scanf("%f",&n);
    for(i=1.5;i<=n;i=i+1)
        s=s+i;
        printf("Addition is = %.2f ",s);
    return 0;
}

