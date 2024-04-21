//1832. Check if the Sentence Is Pangram

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> hash;
        string s = "abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<sentence.size();i++){
            hash[sentence[i]]++;
        }
        
        for(auto it:s){
            if(hash.find(it) == hash.end()){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    string sentence = "leetcode";

    cout<<s.checkIfPangram(sentence);
    return 0;
}