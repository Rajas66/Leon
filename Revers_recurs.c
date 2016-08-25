#include<stdio.h>
int stack[1000];
void main()
{
    int i,j,size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&stack[i]);
    }
    recurs(size-1);
}
void recurs(int n)
{
    if(n>=0)
    {
        printf("%d ",stack[n]);
        recurs(n-1);
    }
    return n;
}
