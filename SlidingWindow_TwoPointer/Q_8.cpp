//1358. Number of Substrings Containing All Three Characters

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> lastindex{-1,-1,-1};
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            lastindex[s[i] - 'a'] = i;
            if(lastindex[0] != -1 && lastindex[1] != -1 && lastindex[0] != -1){
                cnt = cnt + (1 + min(min(lastindex[0],lastindex[1]),lastindex[2]));
            }
        }
        return cnt;
    }
};