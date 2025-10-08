#include <stdio.h>
#include <stdlib.h>
int fact(int n){
    if((n)==1 || (n)==0)
    return 1;
    else
    return (n)* fact((n)-1);
}
int main(){
    int *ptr=(int *)malloc(1*sizeof(int));
    if(ptr==NULL){
        printf("memory not allo...");
        return 1;
    }
    else{
    scanf("%d",ptr);
    int result=fact(*ptr);
    printf("%d",result);}
    free(ptr);
    ptr=NULL;///so that its not act as danggling pointer 
    //means pointing the same address still  after free up memory  ,we  need initiailize it to NULL;
}