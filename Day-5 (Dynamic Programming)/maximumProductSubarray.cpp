class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double ans = nums[0], t1 = 1, t2=1;
        for(int i=0; i<nums.size(); i++){
            if(t1==0 ) t1=1;
            t1 = t1*nums[i];
            if(t2==0) t2=1;
            t2 = t2*nums[nums.size()-1-i];
            ans = max({ans, t1, t2});

        }
        return (int) ans;
    }
};