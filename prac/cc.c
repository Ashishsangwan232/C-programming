// #include <stdio.h>

// void manageFestivalEvents(int n) {
//     for (int day = 1; day <= n; day++) {
//         // Skip days that are multiples of both 3 and 5
//         if (day % 3 == 0 && day % 5 == 0) {
//             continue;
//         }
        
//         // Check for "Critical Issue"
//         if (day % 4 == 0) {
//             printf("Day %d: Critical Issue\n", day);
//             continue;
//         }
        
//         // Check for "Routine Maintenance"
//         if (day % 7 == 0) {
//             printf("Day %d: Routine Maintenance\n", day);
//             continue;
//         }
        
//         // If none of the above conditions match, print "Safe Event"
//         printf("Day %d: Safe Event\n", day);
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of festival days: ");
//     scanf("%d", &n);
    
//     manageFestivalEvents(n);
    
//     return 0;
// }
// #include <stdio.h>

// void numbers(int *a, int *b);

// int main() {
//     int i, z;
//     scanf("%d %d", &i, &z);
//     numbers(&i, &z);
//     return 0;
// }

// void numbers(int *a, int *b) {
//     while (*a < *b) {
//         if (*a % 3 == 0 || *a % 5 == 0) {
//             printf("%d ", *a);
//         }
//         (*a)++;
//     }
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     double value = -7.8;
//     double rounded = round(value);
//     printf("%.2f\n", rounded);
//     return 0;
// }
// #include <stdio.h>
 
// int Func(int n) {
//     if (n <= 0) {
//         return 0;
//     } else {
//         return 3 * Func(n - 1) + 1;
//     }
// }
 
// int main() {
//     printf("%d", Func(8));
//     return 0;
// }
// #include <stdio.h>
// int generateTerm(int n){
//     int c=64;
//     if(n<=26){
//         printf("%c",c+n);
//     }
//     else{
//         while(1){
//             if(n<=26){
//                 break;
//             }
//             n=n-26;
//         }
//         printf("%c",c+n);
//     }
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     generateTerm(a);
// }
// #include <stdio.h>
// void generateTerm(int *n){
//     int c=64;
//     if((*n)<=26){
//         printf("%c",c+(*n));
//     }
//     else{
//         while((*n)>26){
//             // if(n<=26){
//             //     break;
//             // }
//             (*n)=(*n)-26;
//         }
//         printf("%c",c+(*n));
//     }
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     generateTerm(&a);
// }
// #include <stdio.h>

// extern int externalVariable;
// extern int externalFunction(int);

// int main() {
//     int x = 5;
    
//     int result = x > 3 ? x < 7 ? externalFunction(1) : externalFunction(2) : externalFunction(3);
//     printf("%d", result);

//     return 0;
// }
// int externalVariable = 10;
// int externalFunction(int value) {
//     return value * 2;
// }
// #include <stdio.h>

// void recursiveFunc(int n, int num) {
//     auto int m = 3;  
    
//     printf("Before call(%d): %d\n", num, m);
    
//     if (n > 0) {
//         recursiveFunc(n - 1, num -1);
//     }
    
//     printf("After return(%d): %d\n", num, m);
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     recursiveFunc(n, n);
//     return 0;
// }
// #include <stdio.h>
// int func(int score){
//     static int total_score=0;
//     total_score+=score;
//     return total_score;
// }
// int main(){
//     int x;
//     scanf("%d",&x);
//     int score;
//     int a;
//     while(x>0){
//         scanf("%d",&score);
//         x--;
//         a=func(score);
//     }
//     printf("%d",a);

// }
// #include <stdio.h>
// // extern int a,b,c;
// void findsm(int a,int b,int c){
//     // int small;
//     if(a<=b && a<=c){
//         printf("smallest number is %d",a);
//     }else if(b<=a && b<=c){
//         printf("smallest number is %d",b);
//     }
//     else{
//         printf("smallest number is %d",c);
//     } 
// }
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     findsm(a,b,c);
//     return 0;
// }
#include <stdio.h>
int OddMultiply(){
    int a;
    scanf("%d",&a);
    int m=1;
    for(int i=1;i<=a;i+2){
        if(i%2!=0){
            m*=i;
        }
    }
    return m; 
}
int main() {
    int oddMultiplication = OddMultiply();
    printf("%lld\n", oddMultiplication);

    return 0;
}