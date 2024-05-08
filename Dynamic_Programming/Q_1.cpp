//1137. N-th Tribonacci Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int recursive(int n,vector<int> &dp){
        if (n <= 1) 
          return n;
        if (n == 2) 
          return 1; 

        if (dp[n] != -1) 
           return dp[n];

        dp[n] = recursive(n - 1, dp) + recursive(n - 2, dp) + recursive(n - 3, dp);
        return dp[n];
    }
public:
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return recursive(n,dp);
    }
};