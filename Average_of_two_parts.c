#include<stdio.h>
void main()
{

    int value[10000],i,j,n,middle,first1=0,first2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value[i]);
    }
    middle=n/2;
    for(i=0;i<middle;i++)
    {
        if(value[i] < 0)
        {
            printf("Input not Valid\n");
            exit(0);
        }
        first1=first1+value[i];
    }
   // printf("%d\n",first1);
    first1=first1/middle;
    for(i=middle,j=0;i<n;i++,j++)
    {
        if(value[i] < 0)
        {
            printf("Input not Valid\n");
            exit(0);
        }
        first2=first2+value[i];
    }
   // printf("%d\n",first2);
    first2=first2/j;
    if(first1 != first2)
    {
        printf("Not possible\n");
    }
    else
    {
        printf("Average same Possible\n");
    }
}
