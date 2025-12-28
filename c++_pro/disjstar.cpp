#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<
        pair<int, int>, //make pair
        vector<pair<int, int>>, //store pair
        greater<pair<int, int>> //to return minium if don't gonna use it by default it's return max
    > pq;

    pq.push({3, 4});
    

    // cout << pq.top().first << " " << pq.top().second;
    cout << pq.top().first;
    pq.pop();

    return 0;
}
