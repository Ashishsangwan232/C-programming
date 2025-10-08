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
    if(a1==b1){
        for(i=1;i<=a1;i++){
            for(j=1;j<=b1;j++){
                if(i==j){
                    printf("%d ",m1[i][j]);
                }
            }
        }   
    }else{
        printf("no. of row not equal no. of column");
    }
}