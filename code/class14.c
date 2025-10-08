#include <stdio.h>
int main()
// {
//     int a;
//     printf("Enter a num:");
//     scanf("%d",&a);
//     if(a%2==0){
//         goto even;
//     }else{
//         goto odd;
//     }
//     even:
//     printf("%d is even number\n",a);
//     return;
//     odd:
//     printf("%d is odd number\n",a);
//     return 0;
// }
{
    char name[100];
    printf("Enter the character:");
    // scanf("%s",&name);      // In scanf if there is space in btw the name its treminate it..... but not in gets(name);
    gets(name);
    printf("%s is Entered name",name);
    // puts(name);
    
}