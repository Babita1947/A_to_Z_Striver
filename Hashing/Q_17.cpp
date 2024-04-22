//2325. Decode the Message

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans="";

        unordered_map<char,char> mpp;
        char ch = 'a';

        for(int i=0;i<key.size();i++){
            if(key[i]!=' ' && !(mpp[key[i]])) {
                mpp[key[i]] = ch++;
            }
        }

        for(int i=0;i<message.size();i++){
            if(message[i]==' ') 
               ans+=' ';
            else 
               ans += mpp[message[i]];
        }

        return ans;
    }
};

int main(){
    Solution s;
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string ans = s.decodeMessage(key,message);

    cout<<ans;

    return 0;
}