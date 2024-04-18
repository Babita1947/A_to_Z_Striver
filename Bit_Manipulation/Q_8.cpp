// L to R XOR

#include<bits/stdc++.h>
using namespace std;

int findXOR_one_To_N(int N){
    if(N %  4 == 1)
        return 1;
    else if(N % 4 == 2)
        return N+1;
    else if(N % 4 == 3)
        return 0;
    else 
        return N;
}
int findXOR(int L, int R){
     return findXOR_one_To_N(L-1) ^  findXOR_one_To_N(R);
}