//1748. Sum of Unique Elements

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            if(it.second == 1){
                sum += it.first;
            }
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,3,2};

    cout<<s.sumOfUnique(nums);
    return 0;
}