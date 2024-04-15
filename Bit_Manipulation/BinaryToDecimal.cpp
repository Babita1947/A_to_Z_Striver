#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(string s)
{
    int n = s.size();
    int ans = 0;
    int str = stoi(s);//1101
    for(int i=0;i<n;i++){
        ans += (pow(2,i))*(str%10);
        str /= 10;
    }
    return ans;
}

int main()
{
    string s="1101";
    int ans = BinaryToDecimal(s);
    cout<<ans;
    return 0;
}