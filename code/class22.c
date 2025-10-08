#include <stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0;i<=a;i++){
//         printf("Enter the value %d: ",i);
//         scanf("%d",&b);
//         arr[i]=b;
//     }
//     for(int i=0;i<=a;i++){
//         printf("%d ",arr[i]);
//     }
// }

void reference(int a[],int size);
int main(){
    int arr[100],n;
    printf("enter the number of array elements :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("enter the arr %d: ",i);
        scanf("%d",&arr[i]);
    }
    reference(arr[0],n);
}
void reference(int a[],int size){
    printf("element of the array are : ");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
}