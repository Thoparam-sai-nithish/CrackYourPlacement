class Solution {
public:

    int LIS(vector<int> &nums, int ind, int prev, vector<vector<int>> &dp){
        if(ind == nums.size()) return 0;

        if(dp[ind][prev] != -1) return dp[ind][prev];

        int t = INT_MIN, nt = INT_MIN;
        if(prev == 0 || nums[ind] > nums[prev-1]) t = max(t, 1 + LIS(nums, ind+1, ind+1, dp));
        nt = max(nt, LIS(nums, ind+1, prev, dp));

        return dp[ind][prev] = max(t, nt);
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(2500, vector<int>(2501,-1));
        return LIS(nums, 0, 0, dp);
    }
};