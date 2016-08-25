#include<stdio.h>
void main()
{
    int as[1000],ans[1000],n,i=0,inc=0,temp=0,check=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&as[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=as[i];
        while(temp>0)
        {
            ans[inc]=temp%10;
            inc++;
            temp=temp/10;
        }
    }
    while(1)
    {
        check=0;
        for(i=0;i<inc-1;i++)
        {
            if(ans[i] <ans[i+1])
            {
                temp=ans[i];
                ans[i]=ans[i+1];
                ans[i+1]=temp;
                check=1;
            }
        }
        if(check == 0)
        {
            break;
        }
    }
    for(i=0;i<inc;i++)
    {
        printf("%d",ans[i]);
    }
}
