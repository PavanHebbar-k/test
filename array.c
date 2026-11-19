#include<stdio.h>
int main()
{
    int i,a[10],l;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
printf("content of array is\n");
for(i=0;i<10;i++)
printf("%d",a[i]);
l=a[0];
for(i=0;i<10;i++)
{
    if(l<a[i])
    l=a[i];
}
printf("large number is:%d",l);
return 0;
}