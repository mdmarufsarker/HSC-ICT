// Summation and average calculation
#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float average;
    printf("Enter the value of a,b & c");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    average = (a+b+c)/3;
    printf("The value of sum is : %d",sum);
    printf("\nThe value of average is : %.2f",average);
    getch();

}
