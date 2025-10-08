#include <stdio.h>
int main(){
    int a[10]={2,3,4,5,6,7,8};
    int *ptr=&a[4];
    printf("%d\n",*ptr);
    *ptr--;
    printf("%d\n",*ptr);
}