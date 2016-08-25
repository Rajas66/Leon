#include<stdio.h>
void main()
{
    int que[1000],i,n,row=0,col=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&que[i]);
    }
    for(row=0;row<n-1;row++)
    {
        for(col=row;col<n;col++)
        {
         //    printf("%d  %d\n",que[row],que[col]);
             temp=que[row]+que[col];
             for(i=0;i<n;i++)
             {
                if(temp == que[i])
                {
                    printf("%d ",que[i]);
                }
             }
        }
    }
}
