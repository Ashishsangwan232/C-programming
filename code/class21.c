#include <stdio.h>
int main()
{
    char arr[5];//Sized array
    int arr1[]={1,2,3};//unsized array
    printf("size of arr[5] is %d\n",sizeof(arr));//it's tells amount of memory used like here it is 5x4 =20 bits
    int a[5],b,sum=0;
    for(int i=0;i<=5;i++){
        // printf("enter b%d ",i);
        scanf("%d",&b);
        a[i]=b;
        sum+=a[i];
    }
    // printf("sum of array is %d\n",sum);
    // for(int x=0;x<=10;x++)
    // {
    //     printf("a[%d] is %d\n",x,a[x]);
    // }
    // //---------address----------
    // printf(" address  using %%x...\n");
    // for(int x=0;x<=10;x++)
    // {
    //     printf("a[%d] is %x\n",x,&a[x]);
    // }
    // printf("using %%d...\n");
    // for(int x=0;x<=10;x++)
    // {
    //     printf("a[%d] is %d\n",x,&a[x]);
    // }
    // //for min an max;
    // int max=a[0];
    // for(int i=0;i<=10;i++){
    //     if(max<a[i]){
    //         max=a[i];
    //     }

    // }
    // printf("max is %d\n",max);     
    // int min=a[0];
    // for(int i=0;i<=10;i++){

    //     if(min>a[i]){
    //         min=a[i];
    //     }

    // }
    // printf("min is %d",min);     
    int find=10;
    int found=0;
    for(int i=0;i<=5;i++){
        if(find==a[i]){
            printf("position of find element is: %d\n",i+1);
            found=1;
        }
    }
    if(found){
        // printf("found....");
    }
    else{
        printf("not found!...");

    }
}
//Array it is collection of smilr type of data(like int ,float,double,char ,etc.........).
