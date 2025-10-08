// call by refernce........
#include <stdio.h>
void swap(int *a,int *b);
int main(){
    int n1=10,n2=24;
    int *ptr;//pointer varible
    ptr=&n1; // merge as int *ptr=&a
    // printf("addres of n1= %x\n",&n1);
    // printf("addres of n1 using ptr= %x",ptr);
    // printf("\na=%d",n1);
    // printf("\na usind *ptr =%d",*ptr);
    // printf("\na usind ptr =%d",ptr);
    printf("\nbefore Swap n1=%d, n2=%d",n1,n2);
    swap(&n1,&n2);//pass addressssss...............
    printf("\nAfter Swap n1=%d, n2=%d",n1,n2);
}
void swap(int *a,int *b){
    printf("\nbefore swap a=%d and b=%d",*a,*b);
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nafter swap a=%d and b=%d",*a,*b);

}
// points =>& address(var)
// points =>* value at(&)
//pointer in variable which store address of another variable..............
//in call by references the address of actual args in passed to the formal arg
//whatever of changes we are making in the formal args the are reflected back actual argrs 