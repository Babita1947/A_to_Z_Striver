//931. Minimum Falling Path Sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp){

        if(j<0 || j>=matrix[0].size())
           return 1e9;
        if(i == 0)
           return matrix[0][j];
        
        if(dp[i][j] != -1)
           return dp[i][j];

        int up = matrix[i][j] + f(i-1,j,matrix,dp);
        int ld = matrix[i][j] + f(i-1,j-1,matrix,dp);
        int rd = matrix[i][j] + f(i-1,j+1,matrix,dp);
        
        return dp[i][j] = min(up,min(ld,rd));
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n,vector<int>(m,0));

        for(int j=0;j<m;j++){
            dp[0][j] = matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int up = matrix[i][j] + dp[i-1][j];

                int ld = matrix[i][j];
                if(j-1 >= 0) 
                   ld += dp[i-1][j-1];
                else 
                   ld += 1e9;
                   
                int rd = matrix[i][j];
                if(j+1 < m)
                   rd += dp[i-1][j+1];
                else 
                   rd += 1e9;

                dp[i][j] = min(min(ld,rd),up);
            }
        }
        int mini = 1e9;
        for(int j=0;j<m;j++){
           mini = min(mini, dp[n-1][j]);
        }

        return mini;
    }
};