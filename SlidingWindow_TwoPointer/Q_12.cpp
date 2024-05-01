//992. Subarrays with K Different Integers

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int recursive(vector<int> &nums, int k) {
        unordered_map<int, int> mpp;
        int l = 0, r = 0, cnt = 0;
        while (r < nums.size()) {
            mpp[nums[r]]++;
            while (mpp.size() > k) {
                mpp[nums[l]]--;
                if (mpp[nums[l]] == 0)
                    mpp.erase(nums[l]);
                l++;
            }
            if (mpp.size() <= k) {
                cnt += (r - l + 1);
            }
            r++;
        }
        return cnt;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        if (k < 1 || k > nums.size())
            return 0; // Invalid value of k
        return recursive(nums, k) - recursive(nums, k - 1);
    }
};
