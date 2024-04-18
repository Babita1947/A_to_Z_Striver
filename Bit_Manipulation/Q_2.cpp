//Odd Even

#include<bits/stdc++.h>
using namespace std;

string oddEven(int N){
    if(N & 1){
        return "odd";
    }
    return "even";
}