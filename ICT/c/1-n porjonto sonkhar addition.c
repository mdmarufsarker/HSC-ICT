//1-n porjonto sonkhar addition nirnoy
#include<stdio.h>
#include<conio.h>
main()
{
    int n,i;
    int s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
        printf("Addition is = %d ",s);
    return 0;
}
