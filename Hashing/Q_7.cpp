//Pairs with Positive Negative values

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> PosNegPair(int a[], int n) {
        vector<int> v, ans;
        map<int,int> mp;
        
        for(int i = 0; i < n; i++) {
            if(a[i] < 0) {
                v.push_back(a[i]);
            } else {
                mp[a[i]]++; 
            }
        }
        
        sort(v.begin(), v.end());
        
        for(int i = v.size() - 1; i >= 0; i--) {
            int data = abs(v[i]);
            if(mp[data] > 0) {
                ans.push_back(v[i]);
                ans.push_back(-v[i]);
                mp[data]--; 
            }
        }
        
        return ans;
        
        // unordered_map<int,int> posi_mpp;
        // unordered_map<int,int> nega_mpp;
        
        
        // for(int i=0;i<n;i++){
        //     if(a[i] < 0){
        //         nega_mpp[a[i]]++;
        //     }
        //     else{
        //         posi_mpp[a[i]]++;
        //     }
        // }
        
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     int mini = posi_mpp[a[i]];
        //     if(nega_mpp.find(nega_mpp[a[i]]) != nega_mpp.end()){
        //         mini = min(mini,nega_mpp[a[i]]);
        //     }
            
        //     if(mini>=1){
        //         int count = mini*2;
        //         while(count){
        //             ans.push_back(a[i]);
        //             count--;
        //         }
        //     }
        // }
        
        // sort(ans.begin(),ans.end());
        
        // for(int i=0;i<ans.size();i++){
        //     if(i%2 == 0){
        //         ans[i] = -ans[i];
        //     }
        // }
        // return ans;
    }
};


int main(){
    Solution s;
    int a [ ] = {1, -3, 2, 3, 6, -1, -3, 3};
    int n = sizeof(a)/sizeof(a[0]);

    vector<int> ans;
    ans = s.PosNegPair(a,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}