// program to create a simple calculator for addition , subtraction , multiplication , division
#include<stdio.h>
#include<conio.h>
main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or /  ");
    scanf("%c",&o);
    printf("Enter two operands");
    scanf("%f%f",&num1, &num2);
    switch(o){
    case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
        break;
    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;

}
