class Solution {
public:
    int climbStairs(int n) {
        int ans = 1, b = 0;
        if(n <= 2) return n;
        while(n--){
            int temp = ans;
            ans = (ans+b);
            b = temp;
        }
        return ans;
    }
};