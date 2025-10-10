#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++){

    //     // cout << arr[i];
    //     for (int j = i; j <5; j++){
    //         // cout << arr[j];
    //         for(int k=0;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout << "\n";
    //     }
    //     cout << "\n";
    // }

    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j < 5; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    // int st=0;
    // do{
    //     cout<<arr[st];
    //     // cout<<"\n";
    //     for(int j=0;j<st;j++){
    //         cout<<arr[st];
    //         cout<<arr[j];
    //     }
    //     st++;
    //     cout<<"\n";
    // }while(st!=5);
}