#include <stdio.h>
int main(){
    char a='h';
    char b[]="hello";
    char c[15]="hello";
    char d[15]={'h','e','l','l','o','\0'};
    char *e="Hello world";
    printf("%s\n",b);
    printf("%s\n",c);
    printf("%s\n",d);
    printf("%s\n",e);
}