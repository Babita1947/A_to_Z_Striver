//1122. Relative Sort Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        vector<int> ans;
        vector<int> remain;

        for(int i=0;i<arr1.size();i++){
            mpp[arr1[i]]++;
        }

        for(int i=0;i<arr2.size();i++){
            while(mpp[arr2[i]]>0){
                ans.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }
        for(auto& it : mpp) {
            while(it.second > 0) {
                ans.push_back(it.first);
                it.second--;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> arr1{2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2{2,1,4,3,9,6};

    vector<int> ans = s.relativeSortArray(arr1,arr2);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}