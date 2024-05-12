//2364. Count Number of Bad Pairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<long long ,long long> mpp;
        long long n = nums.size();
        long long cnt = 0;
        long long ans = 0;

        for(int i=0;i<n;i++){
            int val = i-nums[i];
            mpp[val]++;
        }
        
        long long good_pair = 0;
        long long total_pair = (n*(n-1))/2;

        for(auto it:mpp){
            if(it.second > 1){
                good_pair = good_pair + (it.second*(it.second-1))/2;
            }
        }
        
        ans = total_pair - good_pair;
        
        return ans;
    }
};