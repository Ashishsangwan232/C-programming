
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, idx = 0, elm = 0;
//     cout << "enter size";
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "\n enter index : ";
//     cin >> idx;

//     if (idx < n)
//     {
//         for (int i = n; i >= idx; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//     }

//     cout << "\nenter elem : ";
//     cin >> elm;

//     arr[idx] = elm;
//     cout << "\n final \n";
//     for (int i = 0; i < (n + 1); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// deletion

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, idx = 0, elm = 0;
    cout << "enter size";
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "\n enter index : ";
    cin >> idx;

    if (idx >= 0 && idx < n)
    {
        for (int i = idx; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
    }

    if (idx <= n)
    {
        cout << "\n final \n";
        for (int i = 0; i < (n - 1); i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "\n final \n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}