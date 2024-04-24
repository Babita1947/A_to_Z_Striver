//2091. Removing Minimum and Maximum From Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0,minIndex = 0;
        int maxi = INT_MIN,mini = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i] < mini){
                mini = nums[i];
                minIndex = i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxIndex=i;
            }
        }
        int front = max(minIndex,maxIndex) + 1;
        int back = n - min(minIndex,maxIndex);

        int frontBack = (min(minIndex,maxIndex)+1) + (n-max(minIndex,maxIndex));

        return min(min(front,back),frontBack);
    }
};

int main(){
    Solution s;
    vector<int> nums{2,10,7,5,4,1,8,6};
    cout<<s.minimumDeletions(nums);
    return 0;
}