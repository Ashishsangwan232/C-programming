#include <stdio.h>
int main()
{
    int n;
    printf("enter size:. ");
    scanf("%d",&n);
    int beg=0,last=n-1,arr[n];
    int mid;
    printf("enter arr:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int arr[5]={1,2,3,4,5,6};
    int st;
    printf("\nenter search term: ");
    scanf("%d",&st);
    while(beg<=last){
        mid=(beg+last)/2;
        if(st==arr[mid]){
            printf("found!");
            printf("index is %d",mid);
            break;
        }else if(arr[mid]<st){
            beg=mid+1;
        }
        else if(arr[mid]>st){
            last=mid-1;
        }
        else{
            printf("element not found!");
        }
    }

}
//---------------bubble sorting--------------
// {
//     int a[100];
//     int hold,i,j,n;
//     printf("\nEnter value of n: ");
//     scanf("%d",&n);
//     printf("\nEnter elements: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("data items in original order: ");
//     for(i=0;i<n;i++){
//         printf("%d",a[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 hold =a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=hold;
//             }
//         }
//     }
//     printf("\nAfter sorting: ");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }
///-----------------------------2D array-----------------------
// #include <stdio.h>
// int main()
// {
//     int m,n;
//     scanf("%d",&m);
//     scanf("%d",&n);
//     // int a[2][2]={{1,2},{3,4}};
//     int a[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("enter a[%d][%d] : ",i,j);
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum=0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             // printf("%d ",a[i][j]);
//             sum+=a[i][j];
//         }
//         printf("\n");
//     }
//     printf("%d",sum);
// }