//1636. Sort Array by Increasing Frequency

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        // using lambda function 
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return mpp[a] != mpp[b] ? mpp[a] < mpp[b] : a > b;
        });

        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,1,2,2,2,3};
    vector<int> ans;
    ans = s.frequencySort(nums);

    for(int i=0;i<nums.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}