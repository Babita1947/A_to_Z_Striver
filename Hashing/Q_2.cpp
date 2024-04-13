//First Repeating Element
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int,int> mpp;
        
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            int key = arr[i];
            auto temp = mpp.find(key);
            if(temp->second > 1){
                return i+1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<s.firstRepeated(arr,n);
    return 0;
}