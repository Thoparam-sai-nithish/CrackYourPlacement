class Solution {
public:

    void genParants(string &s, int o, int c, int n, vector<string> &ans){
        if(o==n && c==n ) ans.push_back(s);
        if(o<n){
            s.push_back('(');
            genParants(s, o+1, c, n, ans);
            s.pop_back();
        }
        if(c<o){
            s.push_back(')');
            genParants(s, o, c+1, n, ans);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="";
        int o=0, c=0;
        genParants(temp, o, c, n, ans);
        return ans;
    }
};