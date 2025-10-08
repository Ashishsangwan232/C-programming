//-----element by element------------
// #include <stdio.h>
// void reference(int);
// int main(){
//     int arr[100],n;
//     int i;
//     printf("enter the size:");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("passing element by value: \n");
//     for(i=0;i<=n;i++){
//         reference(arr[i]);
//     }
//     printf("\noriginal arr ");
//     for(i=0;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }
// void reference(int element){
//     element=element+10;
//     printf("%d ",element);
// }
//-------------searching--------------
#include <stdio.h>
int main(){
    int n;
    printf("Enter the size:. ");
    scanf("%d",&n);
    int arr[n],searchTerm;
    printf("SearchTerm:. ");
    scanf("%d",&searchTerm);
    for(int i=0;i<n;i++){
        // printf("enter values[%d]:. ",i);
        scanf("%d",&arr[i]);
    }
    int found=0;
    printf("searching..............\n");
    for(int i=0;i<n;i++){
        if(searchTerm==arr[i]){
            // printf("element found");
            found=1;
            break;
        }
    }
    if(found){
        printf("element found!.");
    }    
    else{
        printf("not found!!!!!!!!!!!!!!");
    }


}