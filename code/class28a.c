#include <stdio.h>
int main(){
    int a[10]={10,20,30,40,50};
    int *ptr=a;
    printf("a[0] = %d\n",*ptr);
    ptr++;
    printf("a[1] = %d\n",*ptr);
    ptr = ptr+2;
    printf("a[3] = %d\n",*ptr);
    ptr--;
    printf("a[2] = %d\n",*ptr);
}