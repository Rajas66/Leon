import java.util.*;

public class Binary_digit 
{
    static Scanner in=new Scanner(System.in);
    static int input,val,inc=0,i,ans;
    static int sta[]=new int[1000];
    public static int main1(int input,int checking)
    {
        ans=0;
        inc=0;
        val=checking;
        while(input>0 || val>0)
        {
            sta[inc]=input%2;
            input=input/2;
            inc++;
            val--;
        }
        
        ans=sta[inc];
        if(inc>checking)
        {
            return 0;
        }
        for(i=inc-1;i>=0;i--)
        {
            ans=(ans*10)+sta[i];
            System.out.print(sta[i]+"");
        }
        System.out.println();
        return 1;
    }
    public static void main(String args[])
    {
        int asdf;
        int l=1,limit,check=3,row=0;
        limit=in.nextInt();
        for(l=1;l<=999999999;l++)
        {
            asdf=main1(l,limit);
            if(asdf==0)
            {
                break;
            }
        }
    }
}
