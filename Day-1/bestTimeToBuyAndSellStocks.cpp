class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> sufMax(prices.size());
        sufMax[prices.size()-1] = prices[prices.size()-1];
        for(int i=prices.size()-2; i>=0; i--)
            sufMax[i] = max(prices[i], sufMax[i+1]);
        int ans = 0;
        for(int i=0;i<sufMax.size(); i++)
            ans = max(ans, sufMax[i] - prices[i]);
        return ans;
    }
};