//2186. Minimum Number of Steps to Make Two Strings Anagram II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mpp;


        for (char  it: s) {
            mpp[it]++;
        }

        int cnt = 0;

        for (char it : t) {
            if (mpp.find(it) != mpp.end() && mpp[it] > 0) {
                mpp[it]--;
            } else {
                cnt++; 
            }
        }
        for (auto& it : mpp) {
            cnt += it.second; 
        }

        return cnt;
    }
};
