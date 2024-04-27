//Longest Substring with At Most K Distinct Characters

#include<bits/stdc++.h>
using namespace std;

int kDistinctChars(int k, string &str)
{
    int left = 0,right = 0,len = 0,maxLen = INT_MIN;

    unordered_map<char,int> mpp;

    while(right < str.size()){

        mpp[str[right]]++;

        if(mpp.size() > k){
            mpp[str[left]]--;
            if(mpp[str[left]] == 0){
                mpp.erase(str[left]);
            }
            left++;
        }

        if(mpp.size() <= k){
            len  = right - left + 1;
            maxLen = max(len,maxLen);
        }
        
        right++;
    }
    return maxLen;
}
