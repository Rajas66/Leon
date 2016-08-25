#include<stdio.h>
void main()
{
    int tall[1000],n,i=0,flag=0,pos=0,temp=0;
    scanf("%d",&n);
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        scanf("%d",&tall[i]);
    }
    while(1)
    {
        flag=0;
        for(i=0;i<n-1;i++)
        {
            if(tall[i]<tall[i+1])
            {
                temp=tall[i];
                tall[i]=tall[i+1];
                tall[i+1]=temp;
                flag=1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    printf("%d\n",tall[3]);
    printf("%d",tall[pos-1]);
}
