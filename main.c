#include <stdio.h> 

int main(void) 
{ 
    int a[2][2], b[2][2]; 

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
     
    printf("a\n"); 
    printf("%d %d\n",a[0][0],a[0][1]); 
    printf("%d %d\n",a[1][0],a[1][1]); 

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            b[i][j] = a[j][i];
        }
    }

    printf("b\n"); 
    printf("%d %d\n",b[0][0],b[0][1]); 
    printf("%d %d\n",b[1][0],b[1][1]); 

    return 0; 
}