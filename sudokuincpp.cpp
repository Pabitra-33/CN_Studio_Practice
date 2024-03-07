#include<iostream>

using namespace std;

bool isvalid(int matrix[9][9],int row,int column,int value)
{
    for(int i=0;i<9; ++i)
    {
        if(matrix[row][i]==value)
        {
            return false;
        }
        if(matrix[i][column]==value)
        {
            return false;
        }
        if(matrix[3*(row/3)+i/3][3*(column/3)+i%3]==value)
        {
            return false;
        }
    }
    return true;
}

bool solve(int matrix[9][9])
{
    for(int i=0; i<9; ++i)
    {
        for(int j=0; j<9; ++j)
        {
            if(matrix[i][j]==0)
            {
                for(int k=1; k<=9; ++k)
                {
                    if(isvalid(matrix,i,j,k))
                    {
                        matrix[i][j]=k;
                        if(solve(matrix))
                        {
                            return true;
                        }
                        else
                        {
                            //backtrashing
                            matrix[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    //all matrix is fully flled with correct values
    return true;
}

bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    if(solve(matrix))
    {
        return true;
    }
    return false;
}
