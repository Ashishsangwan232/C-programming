// // You are using GCC
// #include <stdio.h>
// int main(){
//     int a,i;
//         scanf("%d",&i);
//         if(i%3==0 && i%5==0){
//             printf("Issue\n");
//         }
//         if(i%4==0){
//             printf("Critical Issue\n");
//         }
//         else if(i%7==0){
//             printf("Routine Maintenance\n");
//         }
//         else{
//             printf("Safe Event\n");
//         }
//     }
// #include <stdio.h>
// #include <stdio.h> 
// int main() { 
//     int a,b=0,r,e=1,ef;
//     printf("enter binary number: ");
//     scanf("%d",&a);
//     printf("%x\n",a);
    // int len=0,copya=a,count=0;
    // while(copya>0){
    //     len++;
    //     copya/=10;
    // }
    // printf("lenght = %d\n",len);
    // if(len==4){
    //     goto binary;
    // }else if(len>4){
    //     while(a>0){
    //         ef=a%10000;
    //         a/=10000;
    //         printf("a = %d\n",a);
    //         while(ef>0){
    //             r=ef%10;  // last digit of number 
    //             ef/=10;   // digits except last digit 
    //             b+=r*e;  // sum of last digit and e = 2**(bit number)
    //             e*=2;    // for sqauring   
    //         } 
    //         printf("Decmial1 = %d\n",b);
    //     }
    // }
    // binary:
    //     while(a>0){
    //         r=a%10;  // last digit of number 
    //         a/=10;   // digits except last digit 
    //         b+=r*e;  // sum of last digit and e = 2**(bit number)
    //         e*=2;    // for sqauring   
    //     } 
    //     printf("Decmial = %d\n",b);
// }

// #include <stdio.h>

// int main() {
// long long n,temp,grt=0;
// printf("enter:");
// scanf("%lld",&n);
// temp=n;
// for(long long i=1;i<n-1;i++){
//     if(temp%i==0){
//         temp/=i;
//         if(i>grt && i<10){
//             grt=i;
//         }
//     }
// }
// printf("%lld\n",grt);
// }


// Select Contest_name as Contest_Title from table; 
// #include <stdio.h>

// void val() {
//     int i = 100;
//     printf ("%d ", i);
//     i++;
// }

// int main() {
//     int i = 10;
//     printf ("%d ", i);
//     i++;
//     val();
//     printf ("%d ", i);
//     val();
// }
// #include <stdio.h>
    
// int main() {
//     void foo();
//     printf("A ");
//     foo();
// }

// void foo() {
//     printf("B ");
// }
// #include <stdio.h>

// int func(int i) {
//     if(i%2 == 0)
//         return 0;
//     else
//         return 1;
// }

// int main() {
//     int i = 5;
//     i = func(i);
//     i = func(i);
//     printf("%d", i);
//     return 0;
// }
// #include <stdio.h> 

// int s(int x) { 

//     return x * x; 

// } 

// int main() { 

//     int result = s(7) + s(3); 

//     printf("%d", result); 

//     return 0; 

// } 
// #include <stdio.h>

// void negate(int num) {
//     *num = -(*num);
// }

// int main() {
//     int value = 8;
//     negate(&value);
//     printf("%d ", value);
//     return 0;
// }
// #include <stdio.h> 

// void calvol(int *l, int *w, int *h) { 

//     *l = *l * 2; 

//     *w = *w * 2; 

//     *h = *h * 2; 

// } 

// int main() { 

//     int l = 3, w = 4, h = 5; 

//     calvol(&l, &w, &h); 

//     printf("%d", l * w * h); 

//     return 0; 

// } 
#include <stdio.h>
void count_in_range(int n);
void count_3s(int n);
int main(){
    int a;
    scanf("%d",&a);
    count_in_range(a);
}
// void count_in_range(int n){
//     int temp,digit,count=0;
//     // temp=n;
//     if(n<10){
//         while(n>0){
//             if(n==3){
//                 count++;
//             }
//             n--;
//         }
//         printf("%d",count);
//     }
//     else{
//         while(n>0){
//             temp=n;
//             while(temp>0){
//                 digit=temp%10;
//                 if(digit==3){
//                     count++;
//                 }
//                 temp/=10;
//                 n--;
//             }
//         }
//         printf("%d",count);
//     }
// }
// void count_3s(int n){
//     // while(n)
// }
void count_in_range(int n){
    int count=0;
    for(int i=0;i<=n;i++){
        int temp=i;
        while(temp>0){
            if(temp%10==3){
                
                count++;
            }
            temp/=10;
        }
    }
    printf("%d",count);
}