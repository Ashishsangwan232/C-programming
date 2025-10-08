// #include <stdio.h>
// int main(){
//     printf("example of for loop:\n");
//     int i=0;
//     for(i=1;i<=10;i++)
//     printf("i = %d\n",i); //without block (single line )

//     printf("outside the loop...\n");
//     printf("i = %d\n",i) ;
// }
// #include <stdio.h>
// int main(){
//     printf("example of for loop:\n");
//     int i=0;
//     for(;i<=10;i++)//to remove initisation part we have to initi... before loop and not remove ";"
//     //we can also remove update part "i++"
//     //but after condition statement should be in the blocks.(same as in next code);  
//     printf("i = %d\n",i); //without block (single line )

//     printf("outside the loop...\n");
//     printf("i = %d\n",i) ;
// }
// #include <stdio.h>
// int main(){
//     printf("example of for loop:\n");
//     int i=0;
//     for(;i<=10;)//condition can also remove, but its infinite times....
//     {
//         printf("i = %d\n",i);
//         i++;
//     }

//     printf("outside the loop...\n");
//     printf("i = %d\n",i) ;
// }
// #include <stdio.h>
// int main(){
//     printf("example of for loop:\n");
//     int i=0;
//     for(;;)// condition replaced by if and break;
//     {
//         printf("i = %d\n",i);
//         i++;
//         if(i==11)
//         break;
//     }

//     printf("outside the loop...\n");
//     printf("i = %d\n",i) ;
// }
// #include <stdio.h>
// int main(){
//     for(int i=0;i<=20;i++){
//         if (i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     printf("outside the loop");
// }
// #include <stdio.h>
// int main(){
//     int a;
//     printf("enter number: ");
//     scanf("%d",&a);

//     for(int i=1;i<=10;i++){
//         printf("%d x %d = %d\n",a,i,a*i);
//     }
//     printf("outside the loop");
// #include <stdio.h>
// int main(){
//     long a,b=1;
//     printf("enter number: ");
//     scanf("%d",&a);

//     for(int i=a;i>0;i--){
//         // printf("%d x %d = %d\n",a,i,a*i);
//         // a=a*i;
//         b*=i;
//     }
//         printf("%ld\n",b);
//     printf("outside the loop");
// }
// #include <stdio.h>
// int main(){
//     int a=0,c,b;
//     printf("enter range: ");
//     scanf("%d",&b);
//     for(int i=1;i<b;i++){
    

//     }
// }
#include <stdio.h>
int main(){
    int a=0,b=1,d=1;
    // printf("enter range: ");
    // scanf("%d",&b);
    for(int i=0;i<=10;i++){
        d=a+b;
        printf("%d  ",a);
        a=b;
        b=d;
    }
}
// 0 1 1 2 3 5 8 13 21 34