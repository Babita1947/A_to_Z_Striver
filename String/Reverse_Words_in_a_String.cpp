// 151. Reverse Words in a String
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
       int j;
       string ans = "";
       for(int i = s.size()-1;i>=0;i--){
           if(s[i] == ' ')
              continue;
           else{
               for(j = i;j>=0 && s[j]!=' ';j--){
                   
               }
               string temp = s.substr(j+1,i-j);
               ans += temp;
               ans += ' ';
               i = j;
           }
        }
        ans.pop_back();
        return ans;
    }
    
};

int main()
{
    Solution s;
    string s1 = "the sky is blue";
    string ans = s.reverseWords(s1);
    cout<<ans;
    return 0;
}