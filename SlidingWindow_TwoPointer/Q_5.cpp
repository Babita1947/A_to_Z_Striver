//2379. Minimum Recolors to Get K Consecutive Black Blocks


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0,right = 0;
        int oper = 0;
        int ans = INT_MAX;

        while(right <blocks.size()){
            if(blocks[right] == 'W'){
                oper++;
            }

            if(right - left + 1 >= k){
                ans = min(ans,oper);
                if(blocks[left] == 'W'){
                    oper--;
                }
                left++;
            }
            right++;
        }
        return ans;
    }
};