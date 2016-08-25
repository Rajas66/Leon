    #include<stdio.h>
    void main()
    {
        int as[1000],k,n,i,stack[1000],j,temp,max=0,start=0;
        scanf("%d",&n);
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&as[i]);
        }
        i=0;
        n=n-k;
        while(i<n)
        {
            stack[i]=0;
            for(j=0,temp=i;j<k;j++,temp++)
            {
                stack[i]=stack[i]+as[temp];

            }
            if(max<stack[i])
            {
                max=stack[i];
                start=i;
            }
            i++;
        }
        for(i=start,j=0;j<k;j++,i++)
        {
            printf("%d ",as[i]);
        }
    }
