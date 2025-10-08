// #include <stdio.h>
// int main(){
//     float  a;
//     scanf("%f",&a);
//     printf("%.2f Dollar = %.2f Rupees",a,a*83.3339);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int m,n;
//     scanf("%d%d",&m,&n);
//     int a= (++n)*(--m);
//     printf("%d",a);
// }
#include <stdio.h>
int main(){
    int n,m,c,d,e;
    scanf("%d%d",&n,&m);
    e=(n*20);
    d=(m*10);
    // c=(e>d)? e-d:d-e;

    ((100+e-d)>50)? printf("The player's final score is %d.",100+e-d):printf("The player is disqualified.");
}
