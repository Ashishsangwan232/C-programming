// #include <stdio.h>
// void isPrime(int a){
//     for(int num=2;num<=a;num++){
//         int isprime=1;
//         for(int i=2;i<=num/2;i++){
//             printf("i= %d \n",i);
//             if(num%i==0){
//                 printf("i= %d \n",i);
//                 isprime=0;
//                 break;
//             }
//         }
//         if(isprime){
//             printf("num = %d ",num);
//         }
//     }
    
// }
// int main(){
//     isPrime(13);
// }
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    printf("%d",a);
    scanf("%d",&b);
    printf("%d",b);
    float p=(a/b)*100;
    printf("%.2f",p);
}