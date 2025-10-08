#include <stdio.h>
int main()
// {
//     int a,b,c;
//     int *ptr;
//     char *ptr1;
//     // scanf("%d",&a);
//     // scanf("%d",&b);
//     // scanf("%d",&c);
//     printf("memory of  int %d\n",sizeof(ptr));
//     printf("memory of char %d",sizeof(ptr1));
// }
// {
//     double radius,area=0.0;
//     double *pr,*pa;
//     scanf("%lf",&radius);
//     pr=&radius;
//     pa=&area;
//     *pa=(3.14)*(*pr)*(*pr);
//     printf("%lf",*pa);
// }
// {
//     int a,fact=1;
//     int *pa,*pfact;
//     scanf("%d",&a);
//     pa=&a;
//     pfact=&fact;
//     for(int i=1;i<=*pa;i++){
//         *pfact=*pfact*i;
//     }
//     printf("%d",*pfact);
// }
//--------------rev using pointer------------------
// {
//     int a,rev=0,rem=0;
//     int *pa,*prev=&rev,*prem=&rem;
//     scanf("%d",&a);
//     pa=&a;
//     while(*pa>0){
//         *prem=(*pa)%10;
//         *prev=(*prev)*10+(*prem);
//         *pa=*pa/10;
//     }
//     printf("%d",*prev);
// }
// {
//     int *ptr=NULL;
//     int a=10;
//     printf("%u\n",ptr);
//     printf("%d\n",*ptr);
//     ptr=&a;
//     printf("%d\n",*ptr);
// }
//----------------------------------------------------------
// {
//     int x=10;
//     char ch='A';
//     void *gp;
//     gp=&x;// void ptr should act as int
//     printf("initialzing int to void gp: %d\n",*(int *)gp);///----(int *) we are doing type casting
//     gp=&ch;
//     printf("initialzing int to void gp: %c",*(char *)gp);
// }
//--------------------------------------------------------------
{
    int var1=60,var2=60;
    int *const ptr=&var1;
    printf("%d\n",*ptr);
    // ptr=&var2;//it's not gonna work
    *ptr=700//we can update  it like that
    var1=700//we can update  it like that
    printf("%d\n",*ptr);
    return 0;
}