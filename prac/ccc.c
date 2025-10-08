#include <stdio.h>
int main(){
//     short int a;
//     int r=0,sumeven=0,sumodd=0;
//     scanf("%d",&a);
//     while(a!=0){
//         r=a%10;
//         a/=10;
//         if(r%2==0){
//             sumeven+=r;
//         }else{
//             sumodd+=r;
//         }
//     }
//     printf("Sum of even digits: %d\n",sumeven);
//     printf("Sum of odd digits: %d\n",sumodd);
//     if(sumeven==sumodd)
//     printf("Valid");
//     else
//     printf("Not valid");
// }
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     printf("\n");
//     for(int j=1;j<=i;j++){
//         printf("*");
//     }
// }
// int n;
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     printf("\n");
//     for(int j=1;j<=i;j++){
//         printf("*");
//     }
// }
// for(int i=1;i<=n;i++){
//     printf("\n");
//     for(int j=n;j>i;j--){
//         printf("*");
//     }
// }
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("\n");
    for(int j=n;j>=i;j--){
        printf("*");
    }
}
for(int i=2;i<=n;i++){
    printf("\n");
    for(int j=1;j<=i;j++){
        printf("*");
    }
}
}