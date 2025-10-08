// #include <stdio.h>
// int main(){
//     short int a=-32500;
//     //unsigned short range gonna increase or double of only short 
//     unsigned int b=-1000000;
//     unsigned int c=-100;
//     printf("size of short int = %d\n",sizeof(a));
//     printf("a = %d\n",a);
//     printf("size of short int = %d\n",sizeof(b));
//     printf("b = %d\n",b); //%d for signed
//     printf("c = %u\n",c); //%u for unsigned
//     //now for float 
//     float d=10.25;
//     printf("size = %d\n",sizeof(d));
//     printf("d= %.3f\n",d);//%f for float (upto 6 decimal places)
//     double e=10.26;
//     printf("size = %d\n",sizeof(e));
//     printf("e = %lf\n",e);//%lf for double float (upto 16 decimal) "but bydefault it's shows upto 6 decimal 
//     long double g= 10.200000;
//     printf("size =%d\n",sizeof(g));
//     printf("f= %lf\n",g);// %Lf (capital L) for long double
// }
// #include <stdio.h>
// int main(){
//     char c= 'a';
//     printf("size = %d\n",sizeof(c));
//     printf("c = %c\n",c);
//     printf("c = %d\n",c);//it's gonna print ASCII value of char 
//     // multiple 
//     char d='abc';
//     char f="abc";// it's give error 
//     printf("size = %d\n",sizeof(d));
//     printf("d = %c\n",d);
//     printf("d = %d\n",d);
//     printf("size = %d\n",sizeof(f));
//     printf("f = %c\n",f);
//     printf("f = %d\n",f);
// }
// #include <stdio.h>
// int main(){
//     const int a=10;
//     printf("%d\n",a);
//     // const int b;
//     // b=10;         //it's give error(here we are trying to update its value)
//     // printf("%d\n",b);
// }
// #include <stdio.h>
// int main(){
//     int num1,num2;
//     printf("Enter value of of num1 and num2:");
//     scanf("%d%d",&num1,&num2);
//     // printf("Enter value of of num2:");
//     // scanf("%d",&num2);
//     int result;
//     result =num1+ num2;
//     printf("Sum = %d\n",result);
//     result =num1- num2;
//     printf("subtract = %d\n",result);
//     result =num1 * num2;
//     printf("Multiply = %d\n",result);
//     result =num1 / num2;
//     printf("divide(quotient) = %d\n",result);
//     result =num1 % num2;
//     printf("divide(reminder) = %d\n",result);
// }
#include <stdio.h>
int main(){
    int x=10;
    double b=5.6;
    printf("%Lf\n",b);
    int c;
    c=x+b;
    printf("%d",c);
}
// // a++ postfix (a=a+1) 
// // a-- postfix (a=a-1)
// //++a prefix its asign the value after calculatoin 
// #include <stdio.h>
// int main(){
//     // int a=5,b=3,c=2;
//     // printf("%d\n",a*b/c+a%c);
//     // printf("%d\n",a/b);
//     int a=128755;
//     printf("%d",((a/10)+(a%10)));
// }
// #include <stdio.h>  
// int main() 
// { 
//     float num= 22.0; 
//     float num2= 7.0;
//     float num3=num/num2; 
//     printf("%.25f", num3);  
// }

// int main(){
//     char b;
//     int a;
//     scanf("%c",b);
//     scanf("%d",a);
//     printf("Roll number %d in Section %c",a,b);
//     return 0;
// }
// #include <stdio.h>
// int main() { 
//     int a = 13; 
//     int b = 12; 
//     int c = 10; 
//     int result; 
//     // Using nested ternary operators 
//     result = (a > b) ? (b > c) ?  1:2:3; 
//      // Print the result 
//      printf("%d\n", result); 
//      return 0; 
//      }
