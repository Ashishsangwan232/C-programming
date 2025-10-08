//Call by value................
#include <stdio.h>
void swap(int a,int b);
int main(){
    int n1,n2,temp;
    scanf("%d%d",&n1,&n2);
    printf("before swap n1=%d and n2=%d\n",n1,n2);
    swap(n1,n2);
    printf("after swap n1=%d and n2=%d\n",n1,n2);   
}
// in call by value the value of actual arguments get copied to formal values 
//=>whatever the changes we make in formal args in function defintion they are not reflecting back to the actual arguments.
// coz formal have their different address to store actual............................ 
void swap(int a,int b){

    printf("before swap a=%d and b=%d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swap a=%d and b=%d\n",a,b);

}