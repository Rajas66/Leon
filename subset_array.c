#include<stdio.h>
void main()
{
    int a1[1000],a2[1000],n1,n2,i=0,j=0,flag=0,check=0;
    scanf("%d %d",&n1,&n2);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }

    j=0;
    for(i=0;i<n1;i++)
    {
        flag=0;
        for(;j<n2;)
        {
            if(a1[i] == a2[j])
            {
                j++;
                flag=1;
                break;
            }
            j++;
        }
        if(flag == 0)
        {
            check=1;
            break;
        }
    }
    if(check == 0)
    {
        printf("YES\n");
    }
}
