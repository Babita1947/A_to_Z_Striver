//Intersection of two arrays

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int> s;
        
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        
        int cnt = 0;
        for(int i=0;i<m;i++){
            int key = b[i];
            if(s.find(key) != s.end()){
                cnt++;
                s.erase(key);
            }
        }
        return cnt;
    }
};

int main(){
    Solution s;
    int a[] = {89, 24, 75, 11, 23};
    int b[] = {89, 2, 4};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    cout<<s.NumberofElementsInIntersection(a,b,n,m);
    return 0;
}