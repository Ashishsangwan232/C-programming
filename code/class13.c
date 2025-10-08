#include <stdio.h>
int main()
// {
    // int i,j;
    // for(i=1;i<=10;i++){
    //     for(j=1;j<=10;j++){
    //         if(j==6)
    //             continue;
    //             // bre;
    //         printf("i = %d, j = %d\n",i,j);
    //     }
    //     if(i==2)
    //         break;
    //     printf("\n");
    // }
    // printf("outside loop will execute once the control comes out of loop");
// }
{
    int i=1,j;
    while(i<=10){
        if(i==6)
        {
            i++;
        continue;
        }
        printf("%d\n",i);
        i++;
        // break;
    }
    printf("out");
}