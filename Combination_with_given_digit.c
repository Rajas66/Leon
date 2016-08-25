#include<stdio.h>
void main()
{
    int a,b,i,j,n,temp=1,flag,pos,inc=0;
    scanf("%d%d",&a,&b);
    scanf("%d",&pos);
    for(i=1;i>0;i++)
    {
        temp=i;
        flag=0;
        while(temp>0)
        {
            if(temp%10 == a || temp%10 == b)
            {
            }
            else
            {
                flag=1;
                break;
            }
            temp=temp/10;
        }
        if(flag == 0)
        {
            inc++;
        }
        if(inc == pos)
        {
            printf("%d\n",i);
            break;
        }
    }
}
