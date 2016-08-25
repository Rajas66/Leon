#include<stdio.h>
void main()
{
    int stack[1000],i=0,n,j,row=0,col=0,inc=0,flag=0,temp;
    int fis[1000],s2[1000],value[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&stack[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            fis[inc]=stack[i];
            s2[inc]=stack[j];
            value[inc]=stack[i]+stack[j];
            inc++;
        }
    }
    while(1)
    {
        flag=0;
        for(i=0;i<inc-1;i++)
        {
            if(value[i]>value[i+1])
            {
                temp=value[i];
                value[i]=value[i+1];
                value[i+1]=temp;
                temp=fis[i];
                fis[i]=fis[i+1];
                fis[i+1]=temp;
                temp=s2[i];
                s2[i]=s2[i+1];
                s2[i+1]=temp;
                flag=1;
            }
        }
        if(flag == 0)
        {
            break;
        }
        printf("%d %d",fis[0],s2[0]);
    }
}
