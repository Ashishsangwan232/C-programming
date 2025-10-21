// #include <stdio.h>
// #include <stdbool.h>

// int main(){

//     //Bubble sorting
//     int a[]={1,2,5,0,3,23};
//     // int a[]={1,2,3,4,5,6,7};
//     int n=sizeof(a)/sizeof(a[0]);

//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=0;j<(n-1);j++){
//             if(a[j]>a[j+1]){
//                 flag=true;
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//         if(!flag){
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }


//selection sorting
#include <stdio.h>
int main()
{
    int a[] = {10, 3, 5, 8, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
         
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}