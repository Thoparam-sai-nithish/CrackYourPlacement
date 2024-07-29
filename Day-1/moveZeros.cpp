class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while(j<nums.size()){
            while(i<nums.size() && nums[i] != 0) i++;
            if(j<i) j = i+1;
            while(j<nums.size() && nums[j] == 0 ) j++;
            if(i<nums.size() && j<nums.size() ) swap(nums[i], nums[j]);
        }
    }
};