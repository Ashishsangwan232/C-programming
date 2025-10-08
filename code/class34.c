#include <stdio.h>
#include <string.h>
int main()
// {
//     char str1[]="hello";
//     // char str2[]=" world";
//     // char str3[]="";
//     char str4[]="";
//     // strcpy(str3,str1);
//     // printf("srt3 = %s\n",str3);
//     strncpy(str4,str1,5);//only copy upto nth  index
//     printf("srt4 = %s\n",str4);
//     // strcat(str1,str2);
//     // printf("srt1 = %s,\nstr2 =%s",str1,str2);
// }   
// {
//     char s[15]="hello";
//     char s1[]=" world";
//     int l=strlen(s);
//     int i=0,j=0;
//     for(i=l,j=0;s1[j]!='\0';i++,j++)
//     {
//         s[i]=s1[j];
//     }
//     s[i]='\0';
//     printf("%s",s);
// }
// {
//     char s[15]="hello";
//     char s1[]=" world";
//     int l=strlen(s);
//     int i=0,j=0;
//     for(i=l,j=0;j<3;i++,j++)
//     {
//         s[i]=s1[j];
//     }
//     s[i]='\0';
//     printf("%s",s);
// }
//-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-===-=-=-=-==-=
// {
//     char s[]="hellO world";
//     char s1[]="HellO world";
//     // int d=strcmp(s,s1);
//     // returns 
//     // zero if s==s1;
//     // postive if s>s1;
//     // negative if s<s1;
//     // printf("%d",d);
//     int l=strlen(s);
//     int l1=strlen(s1);
//     int i,j;
//     int found=1;
//     if(l1!=l){
//         printf("not equal!");
//     }
//     else{
//         // for(i=0,j=0;i<l;i++,j++){
//         //     if(s[i]!=s1[j]){
//         //         found=0;
//         //         break;
//         //     }
//         // }
//         //--------------both are so we can do this -------------------------------------
//         for(i=0;s[i] != '\0';j++){
//             if(s[i]!=s1[i]){
//                 found=0;
//                 break;
//             }
//         }
//         if(found){
//             printf("okk");
//         }
//         else{
//             printf("not equal! bete dekh size brabar hai");
//         }

//     }
// }
// {
//     char s[]="Hello";
//     char s1[]="hello";
//     int d=stricmp(s,s1);
//     printf("%d",d);
// }
// {
    // char s[15]="Hello";
    // strrev(s);
    // printf("%s",s);
    // char s2[15]="";
    // int i,j=0;
    // for(i=strlen(s),j=0;i>0,j<strlen(s);i--,j++){
    //     s2[j]=s[i];
    // }
    // printf("%s",s2);
// }
// {
//     char str[100],temp;
//     int i,j;
//     printf("enter the string : ");
//     scanf("%[^\n]%*c",str);
//     i=0;
//     j=strlen(str)-1;
//     while(i<j){
//         temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//         i++;
//         j--;
//     }
//     printf("\n reverse string is :%s",str);
//     return 0;
// }
