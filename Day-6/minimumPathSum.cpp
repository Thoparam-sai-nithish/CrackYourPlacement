class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        dp[m-1][n-1] = grid[m-1][n-1];

        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1) dp[i][j] = grid[i][j];
                else if(i==m-1) dp[i][j] =dp[i][j+1]+grid[i][j];
                else if(j==n-1) dp[i][j] = dp[i+1][j]+grid[i][j];
                else dp[i][j]=min(dp[i+1][j],dp[i][j+1])+grid[i][j];
            }
        }
        return dp[0][0];
    }
};