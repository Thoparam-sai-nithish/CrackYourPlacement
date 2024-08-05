class Solution {
public:
    string reverseWords(string s) {
        string ans="",temp="";
        vector<string> v;
        for(char c:s){
            if(c==' ' && temp.size()>0) {
                v.push_back(temp);
                temp.clear();
            }
            else if(c!=' ') {
                temp.push_back(c);
            }
        }
        if(temp.size()>0) v.push_back(temp);
        for(auto i = --(v.end());i!=v.begin();i--)
            ans =ans+" "+*i;
        ans = ans +" "+ v[0];
        ans.erase(ans.begin());
        return ans;
    }
};