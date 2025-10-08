// #include <stdio.h>
// void decimalToOctal(int a){
//     int sum=0,temp,number,n=0,count=0;
//     temp=a;
//     while(temp>0){
//         number=temp%8;
//         temp/=8;
//         count++;
//         n=n*10+number;
//     }
//     int rem=0,rev=0;
//     while(n>0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n/=10;
//     }
//     int count_rev=0,temp_rev;
//     temp_rev=rev;
//     while(temp_rev>0){
//         temp_rev/=10;
//         count_rev++;
//     }
//     int z;
//     z=rev;
//     if(count==count_rev){
//         printf("%d",z);
//     }
//     else{
//         do{
//             z*=10;
//             count_rev++;
//         }while(count!=count_rev);
//         // int z;
//         // z*=10;
//         printf("%d",z);
//     }

// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     decimalToOctal(a);
// }
//------------------short method------------
#include <stdio.h>
void decimal_To_Octal(int a);
int main(){
    int a;
    scanf("%d",&a);
    decimal_To_Octal(a);
}
void decimal_To_Octal(int a){
    int Octal[20],i=0;
    for(i;i<=a;i++){
        Octal[i]=a%8;
        a/=8;
        // i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",Octal[j]);
    }
}