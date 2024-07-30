class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l = j+1, h = nums.size()-1;
                while(l<h){
                    long long s = 1LL*nums[i]+nums[j]+nums[l]+nums[h];
                    if(s==target){
                        st.insert({nums[i],nums[j],nums[l], nums[h]});
                        l++;
                    }
                    else if(s > target) h--;
                    else l++;
                }
            }
        }
        for(auto &it : st) ans.push_back(it);

        return ans;
    }
};