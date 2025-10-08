// #include <stdio.h>
// int main(){
//     int n,b,c;
//     scanf("%d",&n);
//     printf("%s",(n>0||n%2==0)? "Valid":"Invalid");
// }
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d%d",&a,&b);
//     ((100+a*20-b*10)>50)?printf("the score is %d",100+a*20-b*10):printf("disqualified");
// }
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the number: ");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//         printf("a:%d is greater than %d",a,b);
//     }
//     // else{
//     //     printf("%d",b);
//     // }
// }
// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     if(a%3==0 && a%5==0){
//         printf("a:%d is divi.. by both 3 and 5",a);
//     }
//     else{
//         printf("not by both");
//     }
// }
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three the number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is large");
    }
    else if(b>a && b>c){
        printf("b is large");
    }
    else{
        printf("c is large");
    }
}
