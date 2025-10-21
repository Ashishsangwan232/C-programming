#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    
    int r = arr.size();
    int c = arr[0].size();
    int found = 0;
    int s = 0;
    int e = c;
    int t = 30;
    while (s <= r)
    {
        if (t == arr[s][e])
        {
            found = 1;
            break;
        }
        else if (t <= arr[s][e])
            e--;
        else
            s++;
    }
    cout << "found : " << found << "\n";
    if (found)
    {
        cout << "found at: " << s << " X " << e << "\n";
    }
    else
    {
        cout << "Not found." << "\n";
    }
}