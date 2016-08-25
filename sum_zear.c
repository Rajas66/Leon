#include<stdio.h>
void main()
{
    int a[1000],i=0,n,j,row=0,col=0,inc=0,flag=0,temp;
    int s1[1000],s2[1000],value[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            s1[inc]=a[i];
            s2[inc]=a[j];
            value[inc]=a[i]+a[j];
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
                temp=s1[i];
                s1[i]=s1[i+1];
                s1[i+1]=temp;
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
        printf("%d %d",s1[0],s2[0]);
    }
}
