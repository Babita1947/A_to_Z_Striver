//Subarray with 0 sum

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> mpp;
        int prefixSum = 0;
        
        for(int i=0;i<n;i++){
            prefixSum += arr[i];
            
            if(prefixSum == 0){
                return true;
            }
            if(mpp.find(prefixSum) != mpp.end()){
                return true;
            }
            mpp.insert(prefixSum);
        }
        return false;
    }
};

int main(){
    Solution s;
    int arr[] = {4,2,-3,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<s.subArrayExists(arr,n);
    return 0;
}