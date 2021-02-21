// Showing 1-100 even number
#include<stdio.h>
#include<conio.h>
main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
    getch();
    return 0;
}
