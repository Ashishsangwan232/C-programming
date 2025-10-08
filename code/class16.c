//   functions are 4 type 
//   1. NO return type(R.T) and NO arguments(args)=Void Sum()
//   2. NO return type(R.T) and arguments(args)=Void Sum(int a,int b)
//   3. return type(R.T) but No arguments(args)=int Sum()
//   4. return type(R.T) but arguments(args)=int Sum(int a,int b)
//   arguments(parameters)
// #include <stdio.h>
//----------1.NO R.T and NO args-----------------
// void sum(); //function prototype
// int main()
// {
//     printf("Starting of main..........\n");
//     sum();
//     printf("\nback in main..............");
//     sum();
//     printf("\nAgain back in main..............");
// }
// void sum() //functional defination
// {
//     int num1,num2,sum=0;
//     printf("Enter two number for addition: ");
//     scanf("%d%d",&num1,&num2);
//     sum=num1+num2;
//     printf("Sum = %d\n",sum);
//     // here no return statment beacuse in need void there is NO R.T
// }


// //----------2.NO R.T and args-----------------
// void sum();
// int main()
// {
//     printf("Starting of main..........\n");
//     int num1,num2;
//     printf("Enter two number for addition: ");
//     scanf("%d%d",&num1,&num2);          //num1 and num2 are actual args
//     sum(num1,num2);
//     printf("back in main..............\n");
//     sum(num1,num2);
//     printf("Again back in main..............\n");
// }
// void sum(int a,int b) // formal args(a,b)
// {
//     int sum=0;
//     sum=a+b;
//     printf("Sum = %d\n",sum);
// }
#include <stdio.h>
int main()
{
    int temp,a,found=0,b=0,rev=0,check,digit;
    scanf("%d",&a);
    temp=a;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    while(rev>0){
        digit=rev%10;
        check=a;
        int count=0;
        while(check > 0){
            if(check%10==digit){
                count++;
            }
            if(count > 1){
                printf("frist repeacted digit is: %d\n",digit);
                found=1;
                break;
            }
            check =check/10;
        }
        if(found){
            break;
        }
        rev/=10;
    }
    if (!found) {
        printf("No repeated digit\n");
    }
    return 0;
}
