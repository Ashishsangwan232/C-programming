// #include <iostream>
// using namespace std;
// 
//merging none sorted array
// int main()
// {
//     int ar1[] = {1, 10, 9, 2};
//     int ar2[] = {2, 4, 5, 1, 5, 9};
//     int n = sizeof(ar1) / sizeof(ar1[0]);
//     int m = sizeof(ar2) / sizeof(ar2[0]);
//     int ar3[n + m] = {0};
//     int i = 0;

//     for (i; i < n; i++)
//     {
//         ar3[i] = ar1[i];
//     };

//     for (int j = 0; j < m; j++)
//     {
//         ar3[i] = ar2[j];
//         i++;
//     }

//     cout << "final array \n";

//     for (int x = 0; x < (n + m); x++)
//     {
//         cout << ar3[x] << " ";
//     }
// }



//merging sorted array;
#include <iostream>
using namespace std;

int main(){
    int ar1[]={1,2,3,4,5};
    int ar2[]={6,7,8,9};
    int n = sizeof(ar1) / sizeof(ar1[0]);
    int m = sizeof(ar2) / sizeof(ar2[0]);
    int ar3[n + m] = {0};
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n || j<m){
        if(ar1[i]<ar2[j]){
            ar3[k]=ar1[i];
            k++;
            i++;
        }else{
            ar3[k]=ar2[j];
            k++;
            j++;
        }
    }
 
    while(i<n){
        ar3[k]=ar1[i];
        k++;
        i++;
    }
    while(j<m){
        ar3[k]=ar2[j];
        k++;
        j++;
    }

    for(int x=0;x<(n+m);x++){
         cout<<ar3[x]<<" ";
    }
}