#include <stdio.h>
int main()
{

int y;
printf("enter a year\n");
scanf("%d", &y);
if ((y%4==0 && y%100!=0 || y%400==0))
{
 printf("%d the year is leap year", y);
}

else
{
  printf  ("%d the year is not a leap year", y);
}
}