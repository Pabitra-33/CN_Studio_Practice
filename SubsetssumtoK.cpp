#include <bits/stdc++.h>

using namespace std; 

void fun(vector<int>&arr,int k,vector<vector<int>>&ans ,vector<int>&ds,int ind)
{
      if(k==0) {
        ans.push_back(ds);
      }
    for(int i=ind;i<arr.size();i++){
          ds.push_back(arr[i]);
          fun(arr, k-arr[i], ans, ds,i+1);
          ds.pop_back();
      }
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;

    vector<int>ds;

     fun(arr,k,ans,ds,0);

    return ans;
}