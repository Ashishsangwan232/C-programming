#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, x1;
    cout << "Enter 1st_number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> x1;

    int ta = x;
    int tb = x1;
    int r, hcf, lcm;
    while (tb != 0)
    {
        r = ta % tb;
        cout<<"reminder"<<r<<endl;
        ta = tb;
        cout<<"ta"<<ta<<endl;
        tb = r;
        cout<<"tb"<<tb<<endl;
    }
    hcf=ta;
    lcm=(x*x1)/hcf;

    // cout<<"mod"<<(12%18)<<endl;

    cout<<"HCF of "<<x<<" and "<<x1<<" is "<<hcf<< endl ;
    cout<<"LCM of "<<x<<" and "<<x1<<" is "<<lcm;

}