#include <stdio.h>
int main()
// {
//     int a;
//     scanf("%d",&a);
//     int arr[5]={10,20,30,40,50};
    
// }
//---------daynamic deletion----------
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n],pos,index,i,temp;
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&pos);
//     index=pos-1;
//     for(i=index;i<n;i++){
//         arr[i]=arr[i+1];
//     }
//     printf("updated\n");
//     for(i=0;i<n-1;i++){
//         printf("%d ",arr[i]);
//     }
    
//     arr[n]=0;
// }

//.-.-.-.-.-.-.-.-.-.daynamic inserting.-.-.-.-.-.-.-.-.-.-.
{
    int n;
    scanf("%d",&n);
    int arr[n],pos,index,i,value;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter value: ");
    scanf("%d",&value);
    printf("Enter position: ");
    scanf("%d",&pos);
    index=pos-1;
    // for(i=n-1;i>=index;i--){
        //     arr[i+1]=arr[i];
        // }
    //------------both are correct-----------
    for(i=n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    printf("updated\n");
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    
}