// 2710. Remove Trailing Zeros From a String

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        while(num.back() == '0')
           num.pop_back();
        return num;
    }
};

int main()
{
    Solution s;
    string num = "51230100";
    cout<<s.removeTrailingZeros(num);
    return 0;
}