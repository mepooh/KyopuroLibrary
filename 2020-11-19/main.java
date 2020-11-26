#include<stdio.h>
int main()
{
    int i,j ;
    int a[9][9]={{1,2,3,4,5,6,7,8,9}};
    for(i=1;i<10;++i)
    {
        for(j=1;j<10;++j)
        {
            a[i][j]=i*j;
            printf("%d  ",a[i][j]);
            
        }
    printf("\n");

    }
    for(i=1;i<10;++i)
    {
        for(j=1;j<10;++j)
        {
            printf("%d*%d=%d  ",j,i, a[i][j]);
            
            

        }
    printf("\n");

    }
return(0);
}

