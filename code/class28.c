#include <stdio.h>
int main(){
    int *ptr;
    {
        int a,b,c;
        printf("Enter value for a: ");
        scanf("%d",&a);
        ptr =&a;
        printf("address of pointed by ptr: %d\n",ptr);
        ptr+=1;
        printf("address of pointed by ptr: %d\n",*ptr);
    }
    ptr=0;
    printf("dangling pointer address of pointed by ptr: %d",ptr);
    // printf("Enter value for b: ");
    // scanf("%d",&b);
    // printf("Enter value for c: ");
    // scanf("%d",&c);
}