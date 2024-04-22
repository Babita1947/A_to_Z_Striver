//1941. Check if All Characters Have Equal Number of Occurrences

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mpp;

        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int freq = mpp[s[0]];
        for(auto it: mpp){
           if(it.second != freq)
              return false;
        }
        return true;
    }
};

int main(){
    Solution s;
    string str = "abacbc";
    cout<<s.areOccurrencesEqual(str);
    return 0;
}