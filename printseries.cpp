#include<iostream.h>
using namespace std;
void increasing(int n, int k, vector<int> &ans)
{
    int j=n;
    if(n<=0)
    {
        ans.push_back(n);
        return;
    }
    ans.push_back(n);
    increasing(n-k,k,ans);
    if(n==j)
    {
        ans.push_back(n);
        return;
    }
    ans.push_back(n);
    increasing(n+k,k,ans);
}

vector<int> printSeries(int n, int k)
{
    // Write your code here
    vector<int>ans;
    increasing(n,k,ans);
    return ans;
}