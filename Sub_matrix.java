import java.util.*;

public class Sub_matrix 
{
    static Scanner in=new Scanner(System.in);
    static int mat[][]=new int[10000][10000];
    static int row,col,i,j,inc,dec,check1,check2,wwe1=0,wwe2=0,flag=0,value1,value2;
    static boolean t=true;
    public static void main(String args[])
    {
        row=in.nextInt();
        col=in.nextInt();
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                mat[i][j]=in.nextInt();
            }
        }
        wwe1=row<col?row:col;
        while(wwe1>1)
        {
            wwe2=wwe1-1;
            for(i=0;i<row-wwe2;i++)
            {
                for(j=0;j<col-wwe2;j++)
                {
                    flag=0;
                    //System.out.println(i+"  "+j);
                    value1=i;
                    value2=j;
                    for(inc=0,check1=i;inc<wwe1;inc++,check1++)
                    {
                        for(dec=0,check2=j;dec<wwe1;dec++,check2++)
                        {
                        //    System.out.print(mat[check1][check2]+"  ");
                            if(mat[check1][check2] == 0)
                            {
                                flag=1;
                            }
                        }
                     //   System.out.println();
                    }
                    if(flag == 0)
                    {
                        System.out.print(value1+"  "+value2+",");
                        System.out.println(--check1+"  "+--check2);
                        t=false;
                        break;
                    }
                }
                if(t== false)
                {
                    break;
                }
            }
            wwe1--;
        }
    }
}
