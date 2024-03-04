//2744. Find Maximum Number of String Pairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        
        for(int i=0;i<words.size();i++){
            string reversed = words[i];
            reverse(reversed.begin(), reversed.end());

            for (int j = i + 1; j < words.size(); ++j) {
                if (words[j] == reversed)
                    count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<string> words{"cd","ac","dc","ca","zz"};
    cout<<s.maximumNumberOfStringPairs(words);
    return 0;
}