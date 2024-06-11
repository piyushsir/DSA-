#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<char>> board,string word,int i,int j,int idx)
{
    if((i<0 || i>=3) || (j<0 || j>=4))
    {
        return false;
    }
    if(idx==word.size()-1)
    {
        return true;
    }
    if(board[i][j]!=word[idx])
    {
        return false;
    }
    char tmp=board[i][j];
    board[i][j]='+';
    bool a = dfs(board,word,i,j+1,idx+1);
    bool b= dfs(board,word,i,j-1,idx+1);
    bool c = dfs(board,word,i+1,j,idx+1);
    bool d = dfs(board,word,i-1,j,idx+1);
    bool e = dfs(board,word,i+1,j+1,idx+1);
    bool f = dfs(board,word,i-1,j+1,idx+1);
    bool g = dfs(board,word,i+1,j-1,idx+1);
    bool h = dfs(board,word,i-1,j-1,idx+1);

    board[i][j]=tmp;
    return a||b||c||e||f||g||h||d;
}
bool ans(vector<vector<char>> board,string word)
{


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(board[i][j]==word[0])
            {
                if(dfs(board,word,i,j,0))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int n=4;
    vector<string> dict
    {
      "START", "NOTE", "SAND", "STONED"
    };

    int r=3;
    int c=3;
    vector<vector<char>> boards
    {
      {'M', 'S', 'E', 'F'},
        {'R', 'A', 'T', 'D'},
        {'L', 'O', 'N', 'E'}
    };

    for(int i=0;i<4;i++)
    {
        if(ans(boards,dict[i]))
        {
            cout<<dict[i]<<" ";
        }
    }


}

