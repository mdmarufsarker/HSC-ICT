#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x,fx;
    scanf("%d",&x);
    fx = pow(x,4)+5*x-3;
    printf("x = %d and f(x) = %d",x,fx);
    getch();
}
