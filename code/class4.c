// #include <stdio.h>
// int main(){
//     int a=10;// postfix its first asign then increace or decrease
//     a++;    //in prefix it's first increase or dec then asign 
//     printf("%d",a);
    
// }
// #include <stdio.h>
// int main(){
//     int a=10,b;
//     b=a++;     
//     printf("%d,%d",a,b);
    
// }
// #include <stdio.h>
// int main(){
//     int a=10,b,c=10;
//     b=a++ + c++;     //(a=10 + c=10) = b=20
//     //a=11 c=11 b=20

//     printf("a=%d,c=%d,b=%d",a,c,b);
    
// }
#include <stdio.h>
int main(){
    int a=10,b,c=10;
    b=++a + c++;     //(a=11 + c=10) =b=21
    //a=11 c=11 b=21

    printf("a=%d,c=%d,b=%d",a,c,b);
    
}
// #include <stdio.h>
// int main(){
//     int a=10,b,c=10;
//     b=++a + ++c;     //(a=11 + c=11) =b=22
//     //a=11 c=11 b=22

//     printf("a=%d,c=%d,b=%d",a,c,b);
    
// }
// #include <stdio.h>
// int main(){
//     int a=10,b,c=10;
//     b=++a + ++c==22;     //(a=11 + c=11) =b=22 //its compare this after adding
//     //a=11 c=11 b=22

//     printf("a=%d,c=%d,b=%d",a,c,b);
    
// }
// #include <stdio.h>
// int main(){
    // int a=10,b=11,c=12,d=13,e;
    // e=a < b || c > d++; //d never get checked bcoz LHS already 1 its no need to check further 

    // printf("e=%d,d=%d",e,d);
    // e=a < b || c > d++;
// }
// #include <Stdio.h>
// int main(){
//     int a=10,b=12;
//     printf("%d\n",a<b);
//     printf("%d\n",a<=b);
//     printf("%d\n",a>=b);
//     printf("%d\n",a==b);
//     printf("%d\n",a!=b);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a=10,b=0,c;
//     c=a&&b;//here we consider a=1 its true value (other then ZERO)
//     printf("%d",c);
// }
// #include <stdio.h>
// int main(){
//     int a=1,b=0,c,d=2;
//     c=a&&b && d++;
//     printf("c=%d,d=%d",c,d);
// }
// #include <stdio.h>
// int main(){
//     int a=10,b=5;
//     a=a+5;
//     printf("%d\n",a);
//     a+=b;
//     printf("%d\n",a);
//     a%=b;
//     printf("%d\n",a);
//     a/=b;
//     printf("%d\n",a);
//     a!=b;
//     printf("%d\n",a);
// }
// #include <stdio.h>
// int main(){
//     int num1,num2;
//     printf("Enter the value of num1 and num2 :");
//     scanf("%d%d",&num1,&num2);// if we not use "&" its give run time error not compiler error
//     if(num1==num2){
//         printf("both are equal");
//     }else{
//         printf("Not equal");
//     }
//     return 0;
// }
