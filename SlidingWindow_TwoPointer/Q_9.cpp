//424. Longest Repeating Character Replacement

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0,right = 0,maxlen = 0 ,maxf = 0;
        vector<int> hash(26,0);

        while(right < s.size()){
            hash[s[right] - 'A']++;
            maxf = max(maxf,hash[s[right] - 'A']);
            int changes = (right - left + 1)-maxf;
            if(changes > k){
                hash[s[left]-'A']--;
                left++;
            }
            if(changes <= k){
                maxlen = max(maxlen,right-left+1);
            }
            right++;
        }
        return maxlen;   
    }
};