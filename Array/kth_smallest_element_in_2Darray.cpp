//378. Kth Smallest Element in a Sorted Matrix
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1,5,9},{10,11,13},{12,13,15}};
    int k=8;
    cout<<s.kthSmallest(matrix,k);
    return 0;
}