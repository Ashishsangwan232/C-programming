#include <stdio.h>
// int main(){
//     int a=11111110;
//     int e;
//     e=a%10000;
//     a/=10000;
//     printf("%d\n",e);
//     printf("%d\n",a);
// }
int main()
{
    int a,i=2,grt=1;
    scanf("%d",&a);
    while(a>1){
        printf("i = %d\n",i);
        while(a%i==0){
        grt=i;
        printf("grt = %d\n",grt);
        a/=i;
        printf("a = %d\n",a);
    } 
    i++; 
    }
    printf("%d",grt);
  
}   