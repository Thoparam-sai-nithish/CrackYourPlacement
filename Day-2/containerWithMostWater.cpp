class Solution {
public:

    int fnd(int l, int r, vector<int> &h){
        return (r-l)*min(h[r],h[l]);
    }

    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1, ans = 0;
        while(l<r){
            ans = max(ans, fnd(l,r,height));
            if(height[l] < height[r]) l++;
            else r--;
        }

        return ans;
    }
};