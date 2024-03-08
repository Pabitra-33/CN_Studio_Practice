#include <bits/stdc++.h>

void addsol(int n,vector<vector<int>>&res,vector<vector<int>>&dp)

{

    vector<int>vec;

    for(int i =0;i<n;i++)

    {

        for(int j =0;j<n;j++)

        {

            vec.push_back(dp[i][j]);

        }

    }

    res.push_back(vec);// push solution to the main vector

}

bool jao(int r,int c,int n,vector<vector<int>>&dp)

{

    int a = r,b = c;

    while(b>=0)//for row checking 

    {

        if(dp[a][b]==1)

        {

            return false;

        }

        b--;

    }

    a=r,b=c;

    while(a>=0&&b>=0)   //for up diagonal checking

    {

        if(dp[a][b]==1)

        {

            return false;

        }

        a--,b--;

    }

    a=r,b=c;

    while(a<n&&b>=0)//for down diagonal checking

    {

        if(dp[a][b]==1)

        {

            return false;

        }

        a++,b--;

    }

    return true;

}

void getsol(int col,int n,vector<vector<int>>&res,vector<vector<int>>&dp)

{

    if(col==n)// push solution if col = n

    {

        addsol(n,res,dp);

        return;

    }

    for(int i =0;i<n;i++)// fill the grid column wise

    {

        if(jao(i,col,n,dp))// if possible to place a queen

        {

            dp[i][col]=1;

            getsol(col+1,n,res,dp);

            dp[i][col]=0;

        }

    }

}

vector<vector<int>> nQueens(int n)
{
	// Write your code here
    vector<vector<int>>res;

    vector<vector<int>>board(n,vector<int>(n,0));   

    getsol(0,n,res,board);

    return res;


	
}