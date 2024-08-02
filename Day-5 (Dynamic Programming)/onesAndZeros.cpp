class Solution {
public:

    int findLongSubSet(vector<pair<int,int>> &v, int ind, int m, int n, vector<vector<vector<int>>> &dp){

        if(ind == v.size()){
            return 0;
        }

        if(dp[ind][m][n] != -1){
            return dp[ind][m][n];
        }
        int ntk = 0;
        ntk = findLongSubSet(v, ind+1, m, n, dp);
        if(m>=v[ind].first && n >= v[ind].second) 
           return dp[ind][m][n] = max(ntk, 1 + findLongSubSet(v, ind+1, m-v[ind].first, n-v[ind].second, dp));
        return dp[ind][m][n] = ntk;
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> v;
        for(string s:strs){
            int o=0, z=0;
            for(char c:s) (c=='0')?z++:o++;
            v.push_back({z,o});
        }
        vector<vector<vector<int>>> dp(strs.size(), vector<vector<int>>(m+1, vector<int>(n+1, -1)));
        return findLongSubSet(v, 0, m, n, dp);
    }
};