#include <stdio.h>
int main(){
    int a2,b2,j,i,a1,b1;
    printf("number of column1: ");
    scanf("%d",&a1);
    printf("number of row1: ");
    scanf("%d",&b1);
    printf("number of column2: ");
    scanf("%d",&a2);
    printf("number of row2: ");
    scanf("%d",&b2);
    int m1[a1][b1];
    int m2[a2][b2];
    int sum[a2][b2];
    printf("Enter for matrix 1: \n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter for matrix 2: \n");
    for(i=1;i<=a2;i++){
        for(j=1;j<=b2;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            sum[i][j]=(m1[i][j]+m2[i][j]);
        }
        
    }
    printf("print m1\n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("print m2:\n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("Sum of m1+m2:\n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
    
}