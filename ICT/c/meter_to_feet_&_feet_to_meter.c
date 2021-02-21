// Meter to Feet convert
// Feet to Meter convert
#include<stdio.h>
#include<conio.h>
main()
{
    float num;
    int choice;
    printf("1: Feet to Meter ,\n2: Meter to Feet \n");
    printf("Enter your choice");
    scanf("%d",&choice);
    if (choice==1)
        {
            printf("Enter the value of Feet");
            scanf("%f",&num);
            printf("Meter : %.3f \n",num/3.28);
        }
    else
        {
            printf("Enter the value of Meter");
            scanf("%f",&num);
            printf("Feet : %.3f \n",num*3.28);
        }
    return 0;
    getch();
}
