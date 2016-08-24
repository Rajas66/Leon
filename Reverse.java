import java.util.*;

public class Reverse 
{
    static Scanner in=new Scanner(System.in);
    public static void main(String[] args)
    {
        // TODO code application logic here
        int i;
        String s;
        s=in.next();
        int len=s.length();
        char ch[]=s.toCharArray();
        for(i=len-1;i>=0;i--)
        {
            System.out.print(ch[i]);
        }
    }
}
