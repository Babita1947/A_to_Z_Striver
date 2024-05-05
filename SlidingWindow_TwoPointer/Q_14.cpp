//209. Minimum Size Subarray Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0,r = 0, len = INT_MAX, preSum = 0;
        
        while(r < nums.size()) {
            preSum += nums[r];
            while(preSum >= target) {
                len = min(len, r - l + 1);
                preSum -= nums[l];
                l++;
            }
            r++;
        }
        
        return len == INT_MAX ? 0 : len;
    }
};