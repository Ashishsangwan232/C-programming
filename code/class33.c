#include <stdio.h>
int main()
// { 
//     // char a='h';
//     // char b[]="hello";
//     // char c[15]="hello";
//     // char d[15]={'h','e','l','l','o','\0'};//"\0"occupy space in the last 
//     // char *e="Hello world";
//     // printf("%c\n",a);
//     // printf("%s\n",b);
//     // printf("%s\n",c);
//     // printf("%s\n",d);
//     // printf("%s\n",e);
//     // char a[]="Ashish";
//     int a[6]={65,83,72,73,83,72};
//     for(int i=0;i<6;i++){
//         printf("\n");
//         for(int j=65;j<=90;j++){
//             printf("%c",j);
//             if(j==a[i]){
//                 printf("\n");
//                 printf("%c",j);
//             }
//         printf("\n");
//     }
//     };
//     // printf("%d\n",'S');
//     // printf("%d\n",'H');
//     // printf("%d\n",'I');
//     // printf("%d\n",'Z');
// ///////in online compiler we need to use fgets instead of gets()
//     char arr[10];
//     fgets(arr,sizeof(arr),stdin);
//     printf("arr =%s",arr);
// }
{
char a[10];
scanf("%[^\n]%*c",&a);
int i=0;
while(a[i]!='\0'){
    printf("i= %d %c \n",i,a[i]);
    i++;
}



}