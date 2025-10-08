#include <stdio.h>
int main(){
    int j,i,a1,b1;
    printf("number of column1: ");
    scanf("%d",&a1);
    printf("number of row1: ");
    scanf("%d",&b1);
    int m1[a1][b1];
    printf("Enter for matrix 1: \n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("print m1\n");
    for(i=1;i<=a1;i++){
        for(j=1;j<=b1;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose m2:\n");
    for(i=1;i<=b1;i++){
        for(j=1;j<=a1;j++){
            printf("%d ",m1[j][i]);
        }
        printf("\n");
    }
    // printf("Enter for matrix 2: \n");
    // for(i=1;i<=a2;i++){
    //     for(j=1;j<=b2;j++){
    //         scanf("%d",&m2[i][j]);
    //     }
    // }
    // printf("tranpose for matrix 2: \n");
    // for(i=1;i<=a2;i++){
    //     for(j=1;j<=b2;j++){
    //         T2[i][j]=m2[j][i];
    //     }
    // }
    // for(i=1;i<=a1;i++){
    //     for(j=1;j<=b1;j++){
    //         multi[i][j]=m1[i][j]*T2[i][j];
    //     }
        
    // }
    // printf("print m1\n");
    // for(i=1;i<=a1;i++){
    //     for(j=1;j<=b1;j++){
    //         printf("%d ",m1[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("print m2:\n");
    // for(i=1;i<=a1;i++){
    //     for(j=1;j<=b1;j++){
    //         printf("%d ",m2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("Transpose m2:\n");
    // for(i=1;i<=a1;i++){
    //     for(j=1;j<=b1;j++){
    //         printf("%d ",T2[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("multi of m1*m2:\n");
    // for(i=1;i<=a1;i++){
    //     for(j=1;j<=b1;j++){
    //         printf("%d ",multi[i][j]);
    //     }
    //     printf("\n");
    // }
    
    
}