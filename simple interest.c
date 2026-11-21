#include<stdio.h>
int main()
{
 int year;
 float si,amount,rate;
  printf("enter amount,rate,year");
  scanf("%f %f %d",&amount,&rate,&year);
  si=(amount*rate*year)/100;
  printf("simple interest=%f",si);
  return 0;
}