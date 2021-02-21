//1-n porjonto even sonkhar addition nirnoy
#include<stdio.h>
#include<conio.h>
main()
{
    int n,i;
    int s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
        s=s+i;
        printf("Addition is = %d ",s);
    return 0;
}

