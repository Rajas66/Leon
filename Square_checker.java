import java.util.*;

public class Square_checker
{
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        int i,inc=0,ans=0;
        String as=new String();
        as=in.next();
        char ch[]=as.toCharArray();
        int len1=ch.length;
        int stack[]=new int[10];
        int wwe[]=new int[100];
        int wwe1=0;
        int t=0;
        if(ch[0] != '(' || ch[len1-1] != ')')
        {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        for(i=0;i<len1;i++)
        {
            if(ch[i]>='0' && ch[i]<='9')
            {
                if(t==0)
                {
                    stack[inc]=ch[i]-48;
                    t=1;
                }
                else
                {
                    stack[inc]= (stack[inc]*10)+(ch[i]-48);
                }
            }
            else
            {
                if(t==1)
                {
                    inc++;
                }
                t=0;
            }
        }
        wwe1=0;
        int j=0;
        wwe=stack;
        for(i=0;i<7;i++)
        {
            for(j=i+2;j<8;j+=2)
            {
                if(wwe[i] == wwe[j])
                {
                    wwe[j]=0;
                }
            }
            if(wwe[i] != 0)
            {
                //System.out.println(wwe[i]);
                wwe1++;
            }
        }
        if(wwe1 == 4)
        {
            System.out.println("Yes it makes square");
        }
        else
        {
            System.out.println("it doesn't makes any square");
        }
    }
}
