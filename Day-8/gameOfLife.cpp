class Solution {
public:

    int countNbr(vector<vector<int>> &board, int i, int j){
        int cnt = 0;
        if(i+1 < board.size()){
            cnt += board[i+1][j];
            if(j-1 >=0) cnt += board[i+1][j-1];
            if(j+1<board[i].size()) cnt += board[i+1][j+1];
        }
        if(i-1>=0){
            cnt += board[i-1][j];
            if(j-1 >=0) cnt += board[i-1][j-1];
            if(j+1<board[i].size()) cnt += board[i-1][j+1];
        }
        if(j-1 >= 0 ) cnt += board[i][j-1];
        if(j+1 < board[0].size()) cnt += board[i][j+1];
        return cnt;
    }

    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> v=board;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cnt = countNbr(board, i, j);
                if(board[i][j]==0 && cnt == 3) v[i][j]=1;
                else if(board[i][j]==1&&(cnt<2 || cnt>3))v[i][j]=0;
            }
        }
        board = v;
    }
};