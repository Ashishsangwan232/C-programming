//---------R.T but NO args-----------
#include <stdio.h>
// int sum();
// int main()
// {
//     printf("Start in main:..........\n");
//     // sum();
//     int result;
//     result=sum();
//     printf("Sum: %d\n",result);
//     // printf("|")
//     printf("back in main:..........\n");
// }
// int sum()
// {
//     int sum=0;
//     int num1,num2,num3,num4;
//     printf("Enter the 4 numders using space btw:");
//     scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
//     sum=num1+num2+num3+num4;
//     return (sum);
//     // printf("Sum: %d",sum);
// }
float sum(int,float,float,float);
int main()
{
    printf("Start in main:..........\n");
    // sum();
    int n1;
    float n2,n3,n4,result=0;
    scanf("%d%f%f%f",&n1,&n2,&n3,&n4);
    result=sum(n1,n2,n3,n4);
    printf("Sum: %f\n",result);
    // printf("|")
    printf("back in main:..........\n");
}
float sum(int a,float b,float c,float d)
{
    int sum=0;
    // int num1,num2,num3,num4;
    // printf("Enter the 4 numders using space btw:");
    // scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum=a+b+c+d;
    return (sum);
    // printf("Sum: %d",sum);
}
