//Key Pair

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int,int> mpp;
	    for(int i=0;i<n;i++){
	        mpp[arr[i]]++;
	    }
	    
	    for(auto it = mpp.begin();it != mpp.end(); it++){
	        int key = it->first;
	        int val = it->second;
	        
	        int pair = x - key;
	        
	        if(pair == key){
	            if(val > 1){
	                return true;
	            }
	        }
	        else{
	            if(mpp.find(pair) != mpp.end()){
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

int main(){
    Solution s;

    int arr[] = {1, 4, 45, 6, 10, 8};
    int k = 16;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<s.hasArrayTwoCandidates(arr,n,k);
    return 0;
}