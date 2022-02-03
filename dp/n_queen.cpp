#include<iostream>
#include<vector>
using namespace std;
bool issafe(vector<string>board,int i,int j)
{
    int row=i,col=j;
    while(row>=0 && col >=0)
    {
        if(board[row][col]=='Q') return false;
        row --; col--;
    }

    row=i;col=j;
    while(col>=0)
    {
        if(board[row][col]=='Q')return false;
        col --;
    }
    row=i;col=j;
    while(row<4 && col>=0)
    {
        if(board[row][col]=='Q') return false;
        col --;row++;
    }
    return true;

}

void queen(int n,int col,vector<string>board)
{
    if(n==col)
    {
        for(int i=0;i<n;i++)
        {
            cout<<board[i]<<endl;
        }
        cout<<endl;
    }
   
  for(int row= 0;row<n;row++)
  {
      if(issafe(board,row,col))
      {
        board[row][col]='Q';
        queen(n,col+1,board);
        board[row][col]='.';
      }
  }


}

int main()
{
   vector<string>board;
   string s(4,'.');
   for (int i = 0;i<4;i++)
   {
       board.push_back(s);
   }
//    for (int i =0 ;i<4;i++)
//    {
//        for (int j =0 ; j<board[i].size();j++)
//        {
//            cout<<board[i][j];
//        }
//        cout<<endl;
//    }

queen(4,0,board);tanu saini byee 
tanu tanu saini saini 

}