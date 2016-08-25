#include<stdio.h>
void main()
{
    int st[100][100],row,col,n,sum=0,temp1=0,temp2=0,flag=0,ans[100][100],row1,col1;
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            scanf("%d",&st[row][col]);
            ans[row][col]=st[row][col];
        }
    }
    flag=0;
    for(row1=0;row1<n;row1++)
    {
        for(col1=0;col1<n;col1++)
        {
            row=row1;
            col=col1;
            if(st[row1][col1] == 0)
            {

            while(row+1  < n)
            {
                ans[row+1][col]=0;
                row++;
            }
            row=row1;
            col=col1;
            while(col+1 < n)
            {
                ans[row][col+1]=0;
                col++;
            }
            row=row1;
            col=col1;
            while(col-1 >= 0)
            {
                ans[row][col-1]=0;
                col--;
            }
            row=row1;
            col=col1;
                while(row-1 >= 0)
                {
                    ans[row-1][col]=0;
                    row--;
                }
                row=row1;
            col=col1;
            }
        }
    }
    printf("\n\n");
    for(row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("%d ",ans[row][col]);
        }
        printf("\n");
    }
}
