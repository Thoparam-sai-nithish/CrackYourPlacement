class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me = nums[0], f = 1;
        for(int i = 1;i<nums.size(); i++){
            if(nums[i] == me) f++;
            else f--;
            if(f==0){
                f=1;
                me = nums[i];
            }
        }
        return me;
    }
};