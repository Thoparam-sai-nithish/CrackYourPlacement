class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans = 0, s=0;
        mp[0]=1;
        for(int i:nums){    
            s += i;
            ans += mp[(s%k+k)%k];
            mp[(s%k+k)%k]++;
        }
        return ans;
    }
};