#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1,x2,x3;
    cout<<"Enter number1: ";
    cin >> x1;
    cout<<"Enter number2: ";
    cin >> x2;
    cout<<"Enter number3: ";
    cin >> x3;
    // maximum of three numbers 
    if (x1 >= x2 && x1 >= x3) {
        cout << x1 << " is the maximum number";
    } else if (x2 >= x1 && x2 >= x3) {
        cout << x2 << " is the maximum number";
    } else {
        cout << x3 << " is the maximum number";
    }

    //now second maximum of three numbers
    if ((x1 >= x2 && x1 <= x3) || (x1 <= x2 && x1 >= x3)) {
        cout << x1 << " is the second maximum number";
    } else if ((x2 >= x1 && x2 <= x3) || (x2 <= x1 && x2 >= x3)) {
        cout << x2 << " is the second maximum number";
    } else {
        cout << x3 << " is the second maximum number";
    }

    //minimum of three numbers 
    if (x1 <= x2 && x1 <= x3) { 
        cout << x1 << " is the minimum number";
    } else if (x2 <= x1 && x2 <= x3) {
        cout << x2 << " is the minimum number";
    } else {
        cout << x3 << " is the minimum number";
    }
    return 0;
}