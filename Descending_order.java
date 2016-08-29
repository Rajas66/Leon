import java.util.*;

public class Descending_order 
{
    
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        int i=0,temp,flag=0;
        String as=in.nextLine();
        String ch[]=as.split(" ");
        int stack[]=new int[1000];
        int len1=ch.length;
        for(i=0;i<len1;i++)
        {
            stack[i]=Integer.parseInt(ch[i]);
            //System.out.print(ch[i]+"  ");
        }
        while(true)
        {
            flag=0;
            for(i=0;i<len1-1;i++)
            {
                if(stack[i] <stack[i+1])
                {
                    temp=stack[i];
                    stack[i]=stack[i+1];
                    stack[i+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        for(i=0;i<len1;i++)
        {
            System.out.print(stack[i]+" ");
        }
    }
    
}
