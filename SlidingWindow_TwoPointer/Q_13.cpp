//76. Minimum Window Substring

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        // if(s.empty() || t.empty()){
        //     return "";
        // }
        vector<int> hash(256,0);
        int l = 0,r = 0,minLen = INT_MAX,cnt = 0;
        int sIndex = -1;

        for(int i=0;i<t.size();i++){
            hash[t[i]]++;
        }

        while(r < s.size()){
            if(hash[s[r]] > 0){
                cnt = cnt + 1;
            }
            hash[s[r]]--;
            while(cnt == t.size()){
                if((r-l+1) < minLen){
                    minLen = (r-l+1);
                    sIndex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0){
                    cnt = cnt - 1;
                }
                l++;
            }
            r = r+1;
        }
        return sIndex == -1 ? "" : s.substr(sIndex,minLen);
    }
};