#include <iostream>
#include <string>
using namespace std;
// int main(){
//     string s1 = "Ashish";
//     string s2 = "Sangwan";
//     string s3 = s1 +" "+ (s2);
//     int size = s3.size();
//     cout << "First character: " << s3.at(0) << endl;
//     cout << "Last character: " << s3.at(size - 1) << endl;
//     string s4;
//     cout << "size: " << size << endl;
//     cout << s3 << endl;
//     cout<<s3.substr(2,10)<<endl;
//     cout<<s3.find("an")<<endl;
//     cout<<s4.empty()<<endl;
//     cout<<s3.insert(14," JAAT");
// }



void printuptoN(int n,int i){
    if(i==n){
        return;
    }
    cout<<i+1<<" ";
    printuptoN(n,i+1);
};

void printuptoi(int n,int i){
    if(i==n){
        return;
    }
    cout<<n<<" ";
    printuptoi(n-1,i);
};

int main(){
    printuptoN(10,0);
    cout<<endl;
    printuptoi(10,0);
}