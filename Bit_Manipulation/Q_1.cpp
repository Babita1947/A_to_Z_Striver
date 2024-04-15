//Check whether K-th bit is set or not

#include<bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k) {
    if((n & (1<<(k-1))) != 0)
       return true;
    return false;
}

int main()
{
    int n = 3, k = 2;
    cout<<isKthBitSet(n,k);
    return 0;
}