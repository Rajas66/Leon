#include<stdio.h>
void main()
{
    int st[100][100],row,col,n,sum=0,temp1=0,temp2=0;
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            scanf("%d",&st[row][col]);
        }
    }
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            if(col>0 && col <n)
            {
                if(st[row][col+1] == 1 && st[row][col-1] == 1)
                {
                    sum=sum+1;
                    printf("%d\n",sum);
                }
            }
            else
            if(row>0 && row<n)
            {
                if(st[row+1][col] == 1 && st[row-1][col] == 1)
                {
                    sum=sum+1;
                //    printf("%d\n",sum);
                }
            }
        }
    }
    temp1=0;
    if(st[temp1][n-2] == 1 && st[temp1+1][n-1] == 1)
    {
        sum=sum+1;
    }
    if( st[n-2][temp1] == 1 && st[n-1][temp1+1] == 1 )
    {
        sum=sum+1;
    }
    if(st[temp1+1][temp1] == 1 && st[temp1][temp1+1] == 1)
    {
        sum=sum+1;
    }
    if(st[n-2][n-1]==1 && st[n-1][n-2] == 1)
    {
        sum=sum+1;
    }
    printf("%d\n",sum);
}
