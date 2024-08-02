class Solution {
public:

    int m = 1e9+7;

    int fun(int pos, int n, map<int,vector<int>> &mp, vector<vector<int>> &dp){
        if(n == 0) return 1;
        if(pos == 5) return 0;

        if(dp[pos][n] != -1) return dp[pos][n];

        int ans = 0;
        for(int i:mp[pos]){
            ans = (ans+fun(i, n-1, mp, dp))%m;
        }

        return dp[pos][n] = ans;
    }
    
    int knightDialer(int n) {
        map<int,vector<int>> mp;
        mp[0] = {4,6};
        mp[1] = {6,8};
        mp[2] = {7,9};
        mp[3] = {4,8};
        mp[4] = {0,3,9};
        mp[5] = {};
        mp[6] = {0,1,7};
        mp[7] = {2,6};
        mp[8] = {1,3};
        mp[9] = {2,4};

        int ans = 0;
        vector<vector<int>> dp(10, vector<int>(n+1, -1));
        for(int i=0;i<10;i++)
        
            ans = (ans+fun(i, n-1, mp, dp))%m;
        return ans;
    }
};