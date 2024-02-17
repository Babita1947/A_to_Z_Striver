//451. Sort Characters By Frequency

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        vector<pair<int,char>> v;
        string ans;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }

        for(auto i:mpp)
        {
           v.push_back({i.second,i.first});
        }

        sort(v.begin(),v.end());

        for(int i=v.size()-1;i>=0;i--)
        {
            ans.insert(ans.length(),v[i].first,v[i].second);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string s1 = "tree";
    cout<<s.frequencySort(s1);
    return 0;
}