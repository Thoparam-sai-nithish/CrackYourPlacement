class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        for(string &s: strs) n = min(n, (int)s.size());

        string ans = "";
        for(int i=0;i<n;i++){
            for(int j=1;j<strs.size();j++)
                if(strs[j][i] != strs[j-1][i]) return ans;
            ans.push_back(strs[0][i]);
        }

        return ans;
    }
};