class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l = i+1, h = nums.size()-1;
            while(l<h){
                int s = nums[i]+nums[l]+nums[h] ;
                if(s == 0){
                    st.insert({nums[i],nums[l],nums[h]});
                    l++;
                }else if(s>0) h--;
                else l++;
            }
        }
        for(auto &it:st) ans.push_back(it);
        return ans;
    }
};