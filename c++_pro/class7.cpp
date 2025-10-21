#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tg = 8;

    int s = 0;

    int n = sizeof(a) / sizeof(a[0]);

    int e = n - 1;

    while (s <= e)
    {
        int m = (s + (e - s) / 2);

        if (tg == a[m]){
            
            cout<<"index of traget"<<m<<endl;
            return 0;

        } else if(tg > a[m]){

            s = (m + 1);

        }else{

            e = (m - 1);

        }
    }
}

// i->1-n-i++
// k=a[i]

// j->i-1 >=0  && a[j] > k ;j--
//     shift

// a[j+1]=k

// 10^8 -10^9 -> O(n),log(n)
// 10^5 -> O(n)log(n) or above all
// 10^4->n^2 and above all
// 1000-> n^3
// 20->2^n
// 10-> (n!)