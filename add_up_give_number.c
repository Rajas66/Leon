#include<stdio.h>
void main()
{
    int ques[1000],i,n,j,temp,value;
    scanf("%d",&n);
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ques[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((ques[i]+ques[j]) == temp)
            {
                printf("%d %d",ques[i],ques[j]);
            }
        }
    }
}
