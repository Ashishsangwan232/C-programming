// #include <stdio.h>
// int main(){
//     int a;
//     char b;
//     printf("Enter number of point: ");
//     // scanf("%d",&a);
//     scanf("%c",&b);
//     switch(b){
//         case 1:
//         printf("it is a point");
//         break;
//         case 65:
//         printf("it is a line");
//         break;
//         case 3:
//         printf("it is a triangle");
//         break;
//         case 4:
//         printf("it is a Sqaure");
//         break;
//         case 5:
//         printf("it is a pentagon");
//         break;
//         default:
//         printf("Invalid");

//     }
//     printf("\nOutside the switch");
// }
// #include <stdio.h>
// int main(){
//     double a,b;
//     int c;
//     printf("Enter number of point: ");
//     scanf("%lf%lf",&a,&b);
//     printf("1. +\n");
//     printf("2. -\n");
//     printf("3. *\n");
//     printf("4. /\n");
//     printf("Choose one:........>");
//     scanf("%d",&c);
//     // printf("5. +")
//     switch(c){
//         case 1:
//         printf("%lf + %lf = %lf",a,b,a+b);
//         break;
//         case 2:
//         printf("%lf + %lf = %lf",a,b,a-b);
//         break;
//         case 3:
//         printf("%lf + %lf = %lf",a,b,a*b);
//         break;
//         case 4:
//         printf("%lf + %lf = %lf",a,b,a/b);
//         break;
//         default:
//         printf("Invalid");
//         break;
//     }
// }
#include <stdio.h>
int main(){
    double a,b;
    char c;
    printf("oper....");
    scanf("%c",&c);
    printf("\nEnter number of point: ");
    scanf("%lf%lf",&a,&b);

    // printf("1. +\n");
    // printf("2. -\n");
    // printf("3. *\n");
    // printf("4. /\n");
    // printf("Choose one:........>");
    // printf("5. +")
    switch(c){
        case '+':
        printf("%lf + %lf = %lf",a,b,a+b);
        
        case '-':
        printf("%lf + %lf = %lf",a,b,a-b);
        break;
        case '*':
        printf("%lf + %lf = %lf",a,b,a*b);
        break;
        case '/':
        printf("%lf + %lf = %lf",a,b,a/b);
        break;
        default:
        printf("Enter (*,+,-,/) only");
        break;
    }
}