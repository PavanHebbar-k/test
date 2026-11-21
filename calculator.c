#include<stdio.h>
int main()
{
  float a,b,c,d,add,sub,product,division,op;  
  printf("this is calculator");
  scanf("%f%f%f%f",&a,&b,&c,&d);
  if(op==+)
  {
    add=a+b+c+d;
    printf("sum=%f",add);
  }
  if(op==-)
  {
    sub=a-b-c-d;
    printf("diffrence=%f",sub);
  }
  if(op==*)
  {
    product=a*b*c*d;
    printf("product=%f",product);
  }
  else
  division=a/b/c/d;
  printf("division=%f",division);
}
