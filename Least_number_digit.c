#include<stdio.h>
void main()
{
    int input,stack[1000],inc=0,temp,flag=0,rm=0,wwe=0,i;
    scanf("%d",&input);
    scanf("%d",&rm);
    while(input>0)
    {
            stack[inc]=input%10;
            input=input/10;
            inc++;
    }
    while(1)
    {
        flag=0;
        for(i=0;i<inc-1;i++)
        {
            if(stack[i] > stack[i+1])
            {
                temp=stack[i];
                stack[i]=stack[i+1];
                stack[i+1]=temp;
                flag=1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    wwe=inc-rm;
    for(i=0;i<wwe;i++)
    {
        printf("%d",stack[i]);
    }
}
