class Solution {
public:

    int count(vector<int> &nums, int x){
        int cnt = 0;
        for(int i:nums) if(x>=i) cnt++;
        return cnt;
    }

    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size()-1;
        while(high-low>1){
            int mid = (low+high)/2;
            if(count(nums, mid) > mid) high = mid;
            else low = mid+1;
        }
        return (count(nums, low)>low) ? low : high;
    }
};