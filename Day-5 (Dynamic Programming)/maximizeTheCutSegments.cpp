class Solution
{
    public:
    int maximizeCuts(int n, int x, int y, int z, vector<int> &dp){
        if(n==0) return 0;
        if(n<0) return -1;
        if(n<x && n<y && n<z) return -1;
        if(dp[n] != -1) return dp[n];
        
        int ans = 0;
        ans =max({1+ maximizeCuts(n-x, x, y, z, dp), 1+maximizeCuts(n-y, x, y, z, dp), 1+maximizeCuts(n-z, x, y, z, dp)});
        
        return dp[n] = (ans==0)?-1:ans;
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        
        vector<int> dp(n+1, -1);
        int ans = maximizeCuts(n, x, y, z, dp);
        return ans < 0? 0 : ans;
    }
};