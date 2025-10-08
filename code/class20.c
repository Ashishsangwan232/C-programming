#include <stdio.h>
int a = 100;// global
void func();
int main()
{
    // int a=10;//it allocated different memory
    a=12;// it replace global memory address...
    printf("a = %d",a);
    func();
}
void func()
{
    printf("\nIn function a= %d",a);
}