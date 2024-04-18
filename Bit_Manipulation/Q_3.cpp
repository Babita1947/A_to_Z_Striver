//231. Power of Two

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == INT_MIN) // Special case for the minimum value of int
            return false; // -2147483648 is not a power of two
        return (n > 0) && ((n & (n - 1)) == 0);
    }
};