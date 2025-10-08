// #include <stdio.h>
// int main(){
//     int i,j;
//     // scanf("%d",&i);
//     // scanf("%d",&j);
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("i = %d and j = %d\n",i,j);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<1000;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<=10-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}