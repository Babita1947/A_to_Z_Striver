//904. Fruit Into Baskets
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0, right = 0, pick = 0;
        int baskets = 2;
        int maxPick = INT_MIN;
        unordered_map<int, int> mpp;

        while (right < fruits.size()) {
            mpp[fruits[right]]++;
           
            if(baskets < mpp.size()) {
                mpp[fruits[left]]--;
                if(mpp[fruits[left]] == 0){
                    mpp.erase(fruits[left]);
                }
                left++;
            }
            if (baskets >= mpp.size()) {
                maxPick = max(right-left+1, maxPick);
            }
            right++;
        }

        return maxPick;
    }
};
