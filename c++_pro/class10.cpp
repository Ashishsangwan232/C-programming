#include <iostream>
using namespace std;

class B;
class A{
    private:
        int a;
    public:
        void setData(int x) { 
            a = x;
        }
        friend  void Compare(A,B);
};

class B{
    private:
        int b;
    public:
        void setData(int y) { 
            b = y; 
        }
        friend void Compare(A,B);
};
void Compare(A x,B y){
    if(x.a>y.b){
        cout<<"A";
    }else{
        cout<<"B";
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    A oa;
    B ob;

    oa.setData(a);
    ob.setData(b);

    Compare(oa, ob);
}