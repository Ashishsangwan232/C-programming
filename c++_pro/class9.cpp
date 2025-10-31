#include <iostream>
using namespace std;
int main(){
    int n=60;
    int array[]={10,20,30,40,50,60};
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;i++){
            for(int k=j;k<n;k++){
                sum=array[i]+array[j]+array[k];
                if(sum==n){
                    cout<<"1: "<<i<<"2: "<<j<<"3: "<<k; 
                }
            }
        }
    }
}