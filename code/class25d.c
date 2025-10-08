#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int value,index,arr[n],pos;
    printf("Enter: ");
    scanf("%d",&value);
    printf("pos for Entering value: ");
    scanf("%d",&pos);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("printing array\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // int arr[n+1];
    printf("\n");
    index=pos-1;
    for(i=n;i>index;i--){
        arr[i]=arr[i-1];
        printf("%d \n",arr[i]);
    }
    arr[index]=value;
    printf("printing array after inserting\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    
}