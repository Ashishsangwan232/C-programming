#include <stdio.h>
#include <string.h>
int main()
{
    char s[]="hello";
    ///reverese it and try to match (strcmp);
    //all done;
    int l=strlen(s);
    // char s1[]="olleh";
    // int l1=strlen(s1);
    // int i,j;
    // int found=1;
    // for(i=l,j=0;j==i;i--,j++){
    //     if(s[i]!=s[j]){
    //         found =0;
    //     }0
    // }
    // if(found){
    //     printf("okk");
    // }else{
    //     printf("not okk");
    // }
}
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-logic for bubble sort
{
    char s[100],t;
    int n,i,j;
    printf("enter : ");
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n-1;i++){
        for(j=0;j<(n-i-1);j++){
            if(s[j]>s[j+1]){
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c ",s[i]);
    }
}