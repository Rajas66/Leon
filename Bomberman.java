import java.util.*;

public class Bomberman 
{
    static Scanner in=new Scanner(System.in);
    public static void main(String args[])
    {
        char bomb = 'O';
        int row = 0, col = 0, t = 0;
        row = in.nextInt();
        col = in.nextInt();
        t = in.nextInt();
        String grid[]=new String[row];
        
        for(int inc = 0;inc < row;inc++)
        {
            grid[inc] = in.next();
        }
        Check(grid,row,col);
    }
    public static void Check(String []grid,int row,int col)
    {
        int a[] = new int[10000];
        int b[] = new int[10000];
        int row_index = 0,col_index = 0;
        for(int i = 0;i < row;i++)
        {
            //System.out.println(grid[i]);
            for(int j = 0;j < col;j++)
            {
                if(grid[i].charAt(j) == 'O')
                {
                    a[row_index++] = i;
                    b[col_index++] = j;
                    System.out.println(i+"  "+j);
                }
            }
        }
    }
}
