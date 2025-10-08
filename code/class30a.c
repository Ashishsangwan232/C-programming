// #include <stdio.h>
// int main(){
//     int arr[100]={1,2,3,4};
//     int *p=arr,i;
    // p++;
    // *(p+1)=29;///at index 2 or place of 3 it replace 29 but p (address not gonna update here)';
    // p=p+1;//pointer will move next
    // *p=23;
    // p--;
    // *(p+0)=12;
    // p=a;//pointer again at base address
    // int sum=0;
    // int *ptr=&arr[0];
    // for(int i=0;i<5;i++){
    //     scanf("%d",(ptr+i));
    // }
    // for(int i=0;i<5;i++){
    //     // printf("%d",*(ptr+i));
    //     sum=sum+(*(ptr+i));
    // }
    // printf("%d",sum);
// }
//=======================================
//=======================================
#include <stdio.h>
int main(){
    int arr[100]={1,2,3,4};
    int *p=arr,i,*p2=&arr[3];
    p++;
    printf("%d %d",p2-p,*p2-*p);
    // if addree p1 is 1005 and p2 is 1013 p2-p1=8 and compiler take 4 bytes so out put is 2;
}