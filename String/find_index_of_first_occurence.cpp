//28. Find the Index of the First Occurrence in a String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            if(haystack.substr(i,needle.size()) == needle)
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string haystack = "sadbutsad";
    string needle = "sad";
    cout<<s.strStr(haystack,needle);
    return 0;
}