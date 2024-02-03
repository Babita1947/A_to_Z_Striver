//73. Set Matrix Zeroes

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int,int> rowIndex;
    unordered_map<int,int> colIndex;
    void setZeroes(vector<vector<int>>& matrix) {

        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0)
                {
                   rowIndex[i]++;
                   colIndex[j]++;
                }
            }
        }

        for(auto it: rowIndex){
            for(int j=0;j<matrix[0].size();j++){
                matrix[it.first][j] = 0;
            }
        }

        for(auto it: colIndex){
            for(int i=0;i<matrix.size();i++){
                matrix[i][it.first] = 0;
            }
        }
        
    }
};
int main()
{
    Solution s;
    vector<vector<int>> matrix{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    s.setZeroes(matrix);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}