#include <stdio.h>
int main(){
    int ar1[]={1,10,9,2};
    int ar2[]={2,4,5,1,5,9};
    int n=sizeof(ar1)/sizeof(ar1[0]);
    int m=sizeof(ar2)/sizeof(ar2[0]);
    int ar3[n+m];
    int i=0;

    for(i;i<n;i++){
        ar3[i]=ar1[i];
    };
    for(int j=0;j<m;j++){
        ar3[i]=ar2[j];
        i++;
    }

    printf("final array \n");
    for(int x=0;x<(n+m);x++){
        printf("%d ",ar3[x]);
    }
}