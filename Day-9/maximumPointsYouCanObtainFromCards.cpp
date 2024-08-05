class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int> pre(n+1, 0), suf(n+1, 0);
        for(int i=1;i<=n;i++) pre[i] = pre[i-1]+cardPoints[i-1];
        for(int i=n-1;i>=0;i--) suf[i] = suf[i+1]+cardPoints[i];

        int ans = 0;
        for(int i=k;i>=0;i--)   
            ans = max(ans, pre[i]+suf[n-k+i]);
        
        return ans;
    }
};