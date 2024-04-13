//Winner of an election
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> mpp;
        int maxi;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        int max_vote = 0;
        string name = "";
        for(auto it=mpp.begin();it!=mpp.end();it++){
            string key = it->first;
            int val = it->second;
            if(val > max_vote){
               max_vote = val;
               name = key;
            }
            else if(val == max_vote){
                if(key < name){
                    name = key;
                }
            }
            
            
        }
        vector<string> ans;
        ans.push_back(name);
        string str = to_string(max_vote);
        ans.push_back(str);
        return ans;
    }
};

int main()
{
    Solution s;
    string arr[] = {"john","johnny","jackie","johnny","john", 
                 "jackie","jamie","jamie","john","johnny",
                 "jamie","johnny","john"};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<string> ans;
    ans = s.winner(arr,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
