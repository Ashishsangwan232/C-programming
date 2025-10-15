#include <stdio.h>
int main(){
    int a[]={1,2,5,0,3,23};
    int n=sizeof(a)/sizeof(a[0]);
    // printf("%d ",n);

    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}