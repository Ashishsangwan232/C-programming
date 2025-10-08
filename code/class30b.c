#include <stdio.h>
int main(){
    int a=25,res=1;
    for(int i=1;i<=a;i++){
        res*=i;
    }
    printf("%lld",res);
}