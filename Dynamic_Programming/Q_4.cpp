//213. House Robber II

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int robbary(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) 
       return 0; 
    if (n == 1) 
       return nums[0];
    
    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);
    
    for(int i = 2; i < n; i++){
        dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
    }
    return dp[n - 1];
  }
public:
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n = nums.size();

        if(n == 1)
          return nums[0];
        
        for(int i=0;i<n;i++){
            if(i != 0){
               temp1.push_back(nums[i]);
            }
            if(i != n-1)
               temp2.push_back(nums[i]);
        }

        return max(robbary(temp1),robbary(temp2));
    }
};