import java.util.Scanner;

class Main {
    public static void main (String args[]) {
            int i,j ;
            int a[9][9]={{1,2,3,4,5,6,7,8,9}};
            for(i=1;i<10;++i)
            {
                for(j=1;j<10;++j)
                {
                    a[i][j]=i*j;
                    System.out.print(" " + a[i][j]);
                    
                }
                System.out.print("\n");
        
            }
            for(i=1;i<10;++i)
            {
                for(j=1;j<10;++j)
                {
                    System.out.print(" " + j + i + a[i][j]);
                    
                    
        
                }
                System.out.print("\n");
        
            }
        return(0);
        }

    }        
}

