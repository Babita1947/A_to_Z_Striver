//2220. Minimum Bit Flips to Convert Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans;
        ans = start ^ goal;
        int cnt = 0;
        while(ans){
            if(ans % 2 == 1){
               cnt = cnt + 1;
            }
            ans = ans / 2;
        }
        return cnt;
    }
};