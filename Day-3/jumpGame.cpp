class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0, i=0;
        while(i<=mx && i<nums.size()){
            mx = max(mx, i+nums[i]);
            i++;
        }
        return i == nums.size();
    }
};