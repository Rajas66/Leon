import java.util.Scanner;

public class Alice_and_Bob
{
    static int ans[][]=new int[1000000][13];
    static char fins[][]=new char[10000000][13];
    static Scanner in=new Scanner(System.in);
    static char problem[][]=new char[1000000][99];
    static char perfect[][]=new char[1000000][99];
    static int sta[]=new int[100];
    static int fac[]=new int[100];
    static char wwe[]=new char[100];
    static char another[]=new char[100];
    static int i,j,n,check,asd,index=0,as,fact,flag=0,f1=0,done=0,temp,proceed,k=0,damn=0,row=0,col=0,n1;
    static int out_bound,count=0,pro1,pro2,pro3;
    static String input=new String();
    static String input1=new String();
    public static void main1()
    {
        input=in.next();
        input1=in.next();
        proceed=in.nextInt();
        another=input1.toCharArray();
        wwe=input.toCharArray();
        n=wwe.length;
        n1=another.length;
        for(i=0;i<n;i++)
        {
            sta[i]=i+1;
        }
        for(i=0;i<n;i++)
        {
            fac[i]=1;
            for(j=1;j<=i+1;j++)
            {
                fac[i]=fac[i]*j;
            }
      //      System.out.println(fac[i]);
        }
        out_bound=9999;
        index=0;
        as=n-2;
        for(i=0;i<n;i++)
        {
            index=0;
            done=0;
            while(index<fac[n-1])
            {
                for(j=0;j<fac[as];j++)
                {
                    done=done%n;
                    while(true)
                    {
                        flag=0;
                        for(asd=i-1;asd>=0;asd--)
                        {
                            if(ans[index][asd] == sta[done])
                            {
                                flag=1;
                            }
                        }
                        if(flag == 0)
                        {
                            break;
                        }
                        done++;
                        done=done%n;
                    }
                    temp=index;
                    ans[temp][i]=sta[done];
                    fins[temp][i]=wwe[done];
                    index++;
                    
                }
                done++;
            }
            as--;
            if(as<0)
            {
                as=0;
            }
        }
        index=0;
        f1=0;        
        index=0;
        damn=0;
        damn=fac[n-1];
        flag=0;
        for(i=0;i<damn;i++)
        {
            for(row=i+1;row<damn;row++)
            {
                flag=0;
                for(j=0;j<proceed;j++)
                {
                    if(fins[i][j] != fins[row][j])
                    {
                        flag=1;
                    }
                }
                if(flag == 0)
                {
                    for(j=0;j<proceed;j++)
                    {
                        fins[row][j]='0';
                    }
                }
                else
                {
                    
                }
            }
        }
        row=0;
        flag=0;
        for(i=0;i<damn;i++)
        {
            flag=0;
            for(j=0;j<proceed;j++)
            {
                if(fins[i][j] == '0')
                {
                    flag=1;
                    break;
                }
                perfect[row][j]=fins[i][j];
                fins[i][j]='0';
             //   System.out.print(problem[i][j]+" ");
            }
            if(flag == 0)
            {
                row++;
       //         System.out.println();
            }
        }
//        damn=1;
//        for(i=0;i<row;i++)
//        {
//            System.out.print(damn+"   ");
//            damn++;
//            for(j=0;j<proceed;j++)
//            {
//                System.out.print(perfect[i][j]+" ");
//            }
//            System.out.println();
//        }
        count=0;
        index=0;
        for(i=0;i<row;i++)
        {
            index=0;
            for(j=0;j<proceed;j++)
            {
                for(col=0;col<n;col++)
                {
                    if(perfect[i][j] == wwe[col])
                    {
                        index++;
                        j++;
                    }
                }
       //         System.out.print(perfect[i][j]+" ");
            }
            if(index == proceed)
            {
                for(j=0;j<proceed;j++)
                {
           //         System.out.print(perfect[i][j]+" ");
                    problem[pro1][j]=perfect[i][j];
                }
                pro1++;
            }
        }
        pro3=0;
        for(i=0;i<pro1;i++)
        {
            pro3=0;
            for(j=0;j<proceed;j++)
            {
                for(col=0;col<n1;col++)
                {
                    if(problem[i][j] == another[col])
                    {
                        pro3++;
                        j++;
                    }
                }
           //     System.out.print(problem[i][j]+" ");
            }
            if(pro3 == proceed)
            {
                for(j=0;j<proceed;j++)
                {
                    System.out.print(problem[i][j]);
                }
                System.out.print(" ");
            }
        }
    }
    public static void main(String args[])
    {
        int inc;
        int power;
        power=in.nextInt();
        for(inc=0;inc<power;inc++)
        {
            main1();
        }
    }
}
