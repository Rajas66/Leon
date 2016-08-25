import java.util.*;

public class sample 
{
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        int que[]=new int[1000];
        int size,i,j,flag=0;
        size=in.nextInt();
        for(i=0;i<size;i++)
        {
            que[i]=in.nextInt();
        }
        for(i=0;i<size-1;i++)
        {
            flag=0;
            for(j=i+1;j<size;j++)
            {
                if(que[i] == que[j])
                {
                    System.out.print(que[i]);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    } 
}
