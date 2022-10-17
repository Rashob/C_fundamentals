// Code for finding grade of a Student
#include <stdio.h>
int main() {

int marks;
printf("Enter your marks \n", &marks);
scanf("%d", &marks);
if (marks<= 100 && marks >= 80)
{
    printf ("Your grade is A\n");
    printf ("keep it up\n");

}
else if (marks<=79 && marks>=60)
{
    printf("Your grade is B\n");
    printf("Try harder \n");
}
else if (marks<=59 && marks>=30)
{
    printf("Your grade is C\n");
    printf("Try more harder \n");
}
else if (marks<29 && marks >=0)
{ 
    printf("Failed\n");
}
else 
printf("Entered marks is invalid \n");

return 0;

}