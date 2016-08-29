#include<stdio.h>
void main()
{
    int input,temp;
    long product=1;
    scanf("%d",&input);
    temp=input;
    product=product*input;
    while(input>0)
    {
        product=product*(input%10);
        input=input/10;
    }
    printf("%d is a seed of %d",temp,product);
}
