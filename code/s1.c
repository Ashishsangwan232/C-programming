// #include <stdio.h>

// int main(){
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     printf("you entered: %d\n",num);
//     return 0;
//     }
// // #include <stdio.h>

// // int main() {
// //     int num;
// //     printf("Enter number: ");
// //     scanf("%d", &num); // Read an integer from the user
// //     printf("You entered: %d\n", num); // Print the entered integer
// //     return 0;
// // }
// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     if (num & 1){
//         printf("number you enter is odd,your entered %d\n",num);
//     }
//     else{
//         printf("your nnumber: %d is a even No.",num);
//     }
//     return 0;}
// #include <stdio.h>
// int main(){
//     int n,i;
//     int f=0,s=1,next;
//     printf("enter your number: ");
//     scanf("%d",&n);
//     printf("fabocnices series gonna printed till :%d\n",n);
//     for(i=0;i<=n;i++){
//         if(i<=1){
//             next=i;
//         }else{
//             next=f+s;
//             f=s;
//             s=next;
//         }

//     printf("%d\n",next);
//     }
//     printf("\n");
//     return 0;    
// }
// #include <stdio.h>
// int main(){
//     int i,j,x;
//     for(i=1;i<=5;i++){
//         for(x=5;x>i;x--){
//             printf(" ");
//         }
//         for(j=1;j<=2*i-1;j++){
//             printf("*");
//     }
//     printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int factorial(int num){
//     if(num==0 || num==1){
//         return 1;
//     }else{
//         return num*factorial(num-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     // printf("you entered:%d for recursion \n",n);
//     printf("factorial of %d is : %d",n,factorial(n));
//     return 0;

// }
// #include <stdio.h>
// int main(){
//     int num=10;
//     int *ptr=&num;
//     printf("value number:%d\n",num);
//     printf("address of number:%p\n",&num);
//     printf("value at address:%d\n",*ptr);
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int arr[]={10,20,30};
//     int *ptr=&arr[2];
//     printf("intial value:%d\n",*ptr);
//     ptr--; 
//     printf("after increment:%d\n",*ptr);
//     return 0;
// }
// #include <stdio.h>
// void compute(int(*operation)(int,int), int x,int y ){
//     printf("here the your's answer: %d\n",operation(x,y));
// }
// int main(){
//     int add(int a,int b){
//         return a+b;
//     }
//     int multiply(int a,int b){
//         return a*b;
//     }   
//     compute(add,10,20);
//     compute(multiply,10,20);
// }
// #include  <stdio.h>
// #include <string.h>
// int main(){
//     char str[100],rev[100];
//     int len,i;
//     printf("Enter your string: ");
//     scanf("%s",str);    
//     printf("you enter this:%s\n",str);
//     len=strlen(str);
//     printf("length of string is:%d\n",len);
//     for(i=0;i<len;i++){
//         rev[i]=str[len-i-1];
//     }
//     rev[len] ='\0';
//     printf("reversed string is: %s\n",rev);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[50]="hello";
//     char str2[50]="world";
//     int len1=strlen(str1);
//     int len2=strlen(str2);
//     strcat(str1," "); 
//     strcat(str1,str2);
//     printf("combined strings:%s\n",str1);
//     printf("length of str1:%d\nlength of str2:%d\ncombined length:%d\n",len1,len2,strlen(str1));
//     if(strcmp(str1,"hello world")==0){
//         printf("string match!\n");
//     }    
// return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     int len,i,j,k;
//     printf("enter the string: ");
//     scanf("%s",str);
//     len=strlen(str);
//     printf("All substring of string are:\n");
//     for(i=0;i<len;i++){
//         for(j=i;j<len;j++){
//             for(k=i;k<=j;k++){
//                 printf("%c",str[k]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100],result[100],ch,rep[50];
//     int i,j=0,removed=0;
//     printf("enter string: ");
//     scanf("%s",str);
//     printf("processing..........\n");
//     getchar();
//     printf("enter charc. you want to remove: ");
//     scanf("%c", &ch);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]==ch && !removed){
//             removed=1;
//         }else{
//             result[j++]=str[i];
//         }
//     }
//     result[j]='\0';
//     printf("after remove:%s\n",result);
//     // printf("\n");
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%s",((a%97==0)||(a%97==1)?"true":"not"));
}
