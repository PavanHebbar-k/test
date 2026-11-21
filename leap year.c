#include<stdio.h>
int main()
{
    int year;
    printf("enter the year to check wheather year is leap or not");
    scanf("%d",&year);
    if((year%4==0 &&year%100!=0) ||(year%400==0))
    {
        printf("year is leap year");

    }
else
{
    printf("this is not leap year");

}
return 0;
}