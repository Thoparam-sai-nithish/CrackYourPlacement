class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount+1, 0);
        for(int i=1;i<=amount; i++){
            int t = INT_MAX;
            for(int c:coins) if(c<=i && v[i-c] != -1) t = min(t, v[i-c]);
            if(t==INT_MAX) v[i]=-1;
            else v[i] = 1+t;
        }
        return v[amount];
    }
};