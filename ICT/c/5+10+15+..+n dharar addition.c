//5+10+15+.....+n dharar addition nirnoy
#include<stdio.h>
#include<conio.h>
main()
{
    int n,i;
    int s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=5;i<=n;i=i+5)
        s=s+i;
        printf("Addition is = %d ",s);
    return 0;
}

