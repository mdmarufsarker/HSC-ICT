// Determine grade point
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float marks;
    printf("Enter your marks");
    scanf("%f",&marks);
    if ((marks>100)||(marks<0))
        printf("Invalid Marks",marks);
    else if (marks<33)
        printf("%.2f - toi exam a fail korsos sala ",marks);
    else if (marks<40)
        printf("%.2f - Grade D",marks);
    else if (marks<50)
        printf("%.2f - Grade C",marks);
    else if (marks<60)
        printf("%.2f - Grade B",marks);
    else if (marks<70)
        printf("%.2f - Grade A-",marks);
    else if (marks<80)
        printf("%.2f - Grade A",marks);
    else if (marks<90)
        printf("%.2f - Grade A+\nI am GPA-5 ",marks);
    else if (marks<=100)
        printf("%.2f Biriyani na khawaile tor khobor ase :)",marks);
    getch();
    return 0;
}
