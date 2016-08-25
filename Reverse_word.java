import java.util.*;
public class Reverse_word 
{
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        int i=0;
        String s=new String();
        s=in.nextLine();
        String as[]=s.split(" ");
        int length=as.length;
        for(i=length-1;i>=0;i--)
        {
            System.out.print(as[i]+" ");
        }
        
    }
}
