#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];

  	for(int i = 0; i < arr.size(); i++) {
    	int currSum = 0;
      
        for(int j = i; j < arr.size(); j++) {
        	currSum = currSum + arr[j];
             
            if(currSum<0){
                currSum=0;
            }
            res = max(res, currSum);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {-2, -3, -8, -7, -2 , -1, -40};
    cout << maxSubarraySum(arr);
    return 0;
}