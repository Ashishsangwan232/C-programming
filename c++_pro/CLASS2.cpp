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

    // // printing sub array
    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j < 5; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                // sum=sum+arr[k];
            }
            // cout <<sum;
            cout << "\n";
        }
        cout << "\n";
    }

    // sum of above in each line
    // for (int i = 0; i < 5; i++)
    // {

    //     for (int j = i; j < 5; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             // cout << arr[k];
    //             sum = sum + arr[k];
    //         }
    //         cout << sum;
    //         cout << "\n";
    //     }
    //     cout << "\n";
    // }


    //sum using two loop

    // for (int i = 0; i < 5; i++)
    // {
    //     int  psum=0;

    //     for (int j = i; j < 5; j++)
    //     {
    //         psum+=arr[j];
    //         cout<<psum;
    //         cout << "\n";
        
    //     }
    //     cout << "\n";
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     int  k=1;

    //     for (int j = i; j < 5; j++)
    //     {
    //         psum+=arr[j];
    //         cout<<psum;
    //         cout << "\n";
        
    //     }
    //     cout << "\n";
    // }
}
//National flags




