#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter your  marks in our school ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("please enter the valid marks");
    }
    else if(marks<50)
    {
        printf(" your Grade F");
    }
    else if(marks>=50 && marks<60)
    {
        printf(" your Grade D");
    }
    else if(marks>=60 && marks<70)
    {
        printf(" your Grade C");
    }
    else if(marks>=70 && marks<80)
    {
        printf(" your Grade B");
    }
    else if(marks>=80 && marks<90)
    {
        printf(" your Grade A");
    }
    else
    {
        printf(" your Grade A+");
    }
}
		