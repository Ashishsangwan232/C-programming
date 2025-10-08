// #include <stdio.h>
// int main(){
//     int a=3,b=4,c;
//     c=(a,b);
//     printf("c= %d\n",c);
//     int d=(a++,b+=a);
//     printf("d= %d\n",d);
//     printf("a= %d\n",a);
//     printf("b= %d\n",b);
//     float x=12.2;
//     int a;
//     a=x;//implicit conversion (automatically convert by complier)
//         // there are two {type cast} 1.implicit(automaticaly by complier(basic datatype)) 2.explicit(forced)
//     printf("%d\n",a);
//     int d=12;
//     float e;//explicit for basic and drived datatype
//     e=(float)d;
//     printf("e = %f \n",e);
// }
// #include <stdio.h>
// int main(){
//     int a=10,b=5;//conditional operator (also known as one-liner if-else)
//     int age;
//     printf("Enter age: ");
//     scanf("%d",&age);
//     printf("%s\n",(age>=18)? "can vote":"cant vote");
//     printf("%d",(a>b)? 1:2);

// }
// #include <stdio.h>
// int main(){
//     int a;
//     printf("Enter number: ");

//     scanf("%d",&a);
//     printf("%s\n" ,(a%2==0)?  printf("%s,number is = %d\n","even",a) : "odd");
//     printf((a%2==0)?  "even" : "odd");

// }
// #include <stdio.h>
// int main(){
//     int a=5000,b=50,c=300;
//     printf((a>100)?(a<500)? "a is greater":"b is greater": "c is greater");//if first value is false then direct print third one
//     // printf("\n%s",(a>b)?((a>c)? "a":"c"):(b>c)? "b":"c");
// }
// #include <stdio.h>
    
// int main() {
//     int x = 16;
//     int result = x |= (1 << 3);//x=x|1<<3;(1<<3==1000(8))10000|1000==16+8=24
//     printf("%d",result);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a = 5, b = 5;
//     printf("%d", (a++ > b) && (++b < a));
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a=15,b=2,c=5,d=14,e;
//     e=(a < b) + (c > d);
//     printf("%d", e);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int x = 100;
//     int result = (x >= 10) ? (x <= 80) ? 1 : 2 : 3;
//     printf("%d", result);
//     return 0;
// }
// #include <stdio.h>
    
// int main() {
//     int a = 2, b = 3;
//     int result = --a * --b;
//     printf("%d", result);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int x = 10;
//     x *= x + 2;
//     printf("%d", x);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int a,d,e;

//     scanf("%d",&a);
//     d=(a-((a/5)+2));
//     e=(a*(0.5));
//     printf("%s",(a>50)?(a%3==0)? printf("%d",e):printf("%d",e):printf("%d",d));
//     return 0;

    
// }
// You are using GCC
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("%s",(a>0)? "negative":"positive");
// }
#include <stdio.h>
int main(){
    float a,e,f,d;
    scanf("%f",&a);
    e=(a*1.5);
    f=(a*3);
    d=(a);
    printf("%.2f",(a>100)?(a<500)? e:f:d);
}