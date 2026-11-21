#include<stdio.h>
int main()
{
    float profit,loss,costprice,sellingprice;
    printf("enter the selling price\n ,costprice\n");
    scanf("%f%f",&costprice,&sellingprice);
    if(sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        printf("the profit is=%f",profit);
    }
    else
    {
        loss=costprice-sellingprice;
        printf("the loss is=%f",loss);
    }
    return 0;
}