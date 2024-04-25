//1004. Max Consecutive Ones III

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left = 0,right = 0,len = 0,maxlen = 0;
        int zeros = 0;

        while(right < nums.size()){
            if(nums[right] == 0){
                zeros++;
            }
            if(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }

            if(zeros <= k){
                len = right - left + 1;
                maxlen = max(maxlen,len);
            }
            right++;
        }
        return maxlen;
    }
};

