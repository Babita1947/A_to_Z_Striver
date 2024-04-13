//Non-Repeating Element

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
       unordered_map<int,int> mpp;
       for(int i=0;i<n;i++){
          mpp[arr[i]]++;   
       }
       
       for(int i=0;i<n;i++){
           if(mpp[arr[i]] == 1){
               return arr[i];
           }
       }
       return 0;
        
    } 
  };

int main(){
    Solution s;
    int arr[] = {-1, 2, -1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<s.firstNonRepeating(arr,n);
}