//791. Custom Sort String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mpp;
        string ans = "";

        for(auto x: s){
            mpp[x]++;
        }

        for(auto x: order){
            if(mpp.find(x) != mpp.end()){
                auto temp = mpp.find(x);
                int count = temp->second;

                string s(count, x);
                ans += s;
                mpp.erase(x);
            }
        }

        for(auto x: mpp){
            string s(x.second,x.first);
            ans += s;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string order = "cba";
    string str = "abcd";
    string ans = s.customSortString(order,str);
    cout<<ans;
    return 0;
}