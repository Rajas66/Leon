import java.util.*;

public class Pair_of_strings 
{
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n',
                        'o','p','q','r','s','t','u','v','w','x','y','z'};
        int i=0,count1=0,count2=0,j=0,ans=0;
        String s1=new String();
        String s2=new String();
        s1=in.next();
        s2=in.next();
        char a1[]=s1.toCharArray();
        char a2[]=s2.toCharArray();
        int len1=a1.length;
        for(j=0;j<26;j++)
        {
            count1=0;
            count2=0;
            char c=alpha[j];
            for(i=0;i<len1;i++)
            {
                if(a1[i] == c)
                {
                    count1++;
                }
                if(a2[i] == c)
                {
                    count2++;
                }
            }
            if(count1 < count2)
            {
                while(count1!=count2)
                {
                    ans+=3;
                    count2--;
                }   
            }
            else
                if(count1>count2)
                {
                    ans+=4;
                    count2++;
                }
        }
        System.out.println(ans);
    }
}
