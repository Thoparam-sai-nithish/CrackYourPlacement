class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2);
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]=-1;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] != -1){
                return {mp[nums[i]], i};
            }
            mp[target-nums[i]] = i;
        }
        return {};
    }
};