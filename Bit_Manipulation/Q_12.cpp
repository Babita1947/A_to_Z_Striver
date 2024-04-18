//29. Divide Two Integers

#include<bits/stdc++.h>
using namespace std;

#include<math.h>
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend == divisor)
           return 1;
        bool sign = true;

        if(dividend >= 0 && divisor<0){
            sign = false;
        }
        else if(dividend < 0 && divisor>0){
            sign = false;
        }

        long n = abs(dividend);
        long d = abs(divisor);
        
        long ans = 0;
        while(n>=d){
            int cnt = 0;
            while(n >= (d<<(cnt+1))){ // (d<<(cnt+1)) = d*(2^(cnt+1))
                cnt++;
            }
            ans += (1<<cnt); // 2^cnt = (1<<cnt)
            n = n - (d<<cnt);
        }

        if(ans == (1<<31) && sign){
            return INT_MAX;
        }
        if(ans == (1<<31) && !sign){
            return INT_MIN;
        }
        return sign ? ans : -ans;
    }
};