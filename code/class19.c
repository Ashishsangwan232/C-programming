// // recursion
// #include <stdio.h>
// // int fact(int);
// // int main()
// // {   
// //     int a;
// //     scanf("%d",&a);
// //     long int result;
// //     result =fact(a);
// //     printf("factorial of %ld is %ld",a,result);
// //     // main();
// // }
// // int fact(int n){
// //     if(n<=1){
// //         return 1;
// //     }else{
// //         return(n*fact(n-1));
// //     }
// // }
int sum(int n);
int main(){
    int a;
    scanf("%d",&a);
    // int result;
    // result=fact(a);
    // printf("sum of digits:%d",result);
    printf("%d",a);
    printf("sum of digits:%d",sum(a));
    // printf(result);
}
int sum(int n)
{
    if (n<0){
        return 0;
    }
    else{
        n+sum(n-1);
    }
}
// #include <stdio.h>
// int fib(int);
// int main(){
//     int a,i;
//     // sum()
//     printf("enter no.:");
//     scanf("%d",&a);
//     printf("fibbonacciii series\n");
//     for(i=0;i<a;i++){
//         printf("%d\n",fib(i));
//     }
//     return 0;
// } 
// int fib(int n){
//     if (n==0)
//     return 0;
//     else if( n==1)
//     return 1;
//     else
//     return (fib(n-1)+fib(n-2));
// }
//static can not be change in their country world or earth