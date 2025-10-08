#include <stdio.h>
int main()
// {
//      printf("Example of the while loop\n");
//      int  i=1;
//      while(i<=10000){
//         printf("i = %d\n",i);
//         i++;
//      }
//      printf("outside while always ");
// }
               //"sum of 1 to 10 digits"  
// {
//     int i=0,a=0;
//     while(i<=10){
//         a+=i;
//         i++;
//     }
//     printf("sum = %d",a);
// }
               //" using Do while loop"
// {
//     int i=1;
//     do{                     //its post-test loop means its atleast print once if condition is false
//         printf("%d\n",i);
//         i++;
//     }while(i<=10);
//}
                    // reverse of number
{
    int a,rem=0,rev=0;
    printf("enter number: ");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
    printf("reversed number = %d\n",rev);
        a=a/10;

    }
    printf("reversed number = %d\n",rev);
}
// {
//     int a;
//     printf("enter number: ");
//     scanf("%d",&a);
//     for(int i=1;i<a;i++){
//         if(a%i==0){
//             printf("not prime");
//             break;
//         }
//         else{
//             printf("prime");
//             break;
//         }
//     }
// }