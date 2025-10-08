#include <stdio.h>
int main(){
    // int arr[5]={10,20,30,40,50};
    int n;
    int arr[100];
    int *ptr=arr;//bydefault it's indicates base address
    int *ptr1=&arr[4];// for directly point desired index
    ///enter nno. of array elements 
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        // scanf("%d",&arr[i]);
        // scanf("%d",&ptr[i]);
        // scanf("%d",(ptr+i));//here no need &
        scanf("%d",(arr+i));//here no need &
    }
    for(int i=0;i<n;i++){
        // printf("%d ",ptr);
        // printf("%d ",*(ptr+i));
        // printf("%d ",*(ptr)+i);
        // printf("%d ",*(arr+i));
        // printf("%d ",i[arr]);
        printf("%d ",i[ptr]);
        // printf("%d ",*(ptr++));
    }
    // printf("\n");
    // printf("sub=%d\n",*ptr1-*ptr);
}