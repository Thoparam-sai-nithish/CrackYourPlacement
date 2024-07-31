class Solution {
public:

    bool isValid(vector<vector<char>> &board, int row, int col, int ind, vector<vector<int>> &vis, string &word){
        if(ind == word.size()-1) return true;

        vis[row][col] = 1;
        int ans = false;
        if(row-1 >= 0 && board[row-1][col] == word[ind+1] && vis[row-1][col] == 0)  
            ans = (ans || isValid(board, row-1, col, ind+1, vis, word));
        if(row+1 < board.size() && board[row+1][col] == word[ind+1] && vis[row+1][col] == 0)  
            ans = (ans || isValid(board, row+1, col, ind+1, vis, word));
        if(col-1 >= 0 && board[row][col-1] == word[ind+1] && vis[row][col-1] == 0) 
            ans = (ans || isValid(board, row, col-1, ind+1, vis, word));
        if(col+1 < board[0].size() && board[row][col+1] == word[ind+1] && vis[row][col+1] == 0) 
            ans = (ans || isValid(board, row, col+1, ind+1, vis, word)) ; 

        vis[row][col] = 0;
        return ans;
    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> vis(board.size(), vector<int> (board[0].size(),0));
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++){
                // vis[i][j]=1;
                if(board[i][j]==word[0] && isValid(board, i, j, 0, vis, word)) return true;
                // vis[i][j]=0;
            }
        return false;
    }
};