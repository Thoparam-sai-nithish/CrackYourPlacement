class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1, j=1;
        while(j<nums.size()){
            while(j<nums.size() && nums[j]<= nums[i-1]) j++;
            if(j<nums.size()){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};