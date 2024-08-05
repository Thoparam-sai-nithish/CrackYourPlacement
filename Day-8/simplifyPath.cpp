class Solution {
public:
    string simplifyPath(string path) {
        string ans = "", temp = "";
        stack<string> st;
        for(char c:path){
            if(c=='/') {
                if(temp.size() == 0) continue;
                if(temp == ".." && st.size()) st.pop();
                if(temp != "." && temp != "..") st.push(temp);
                temp = "";
            }
            else{
                temp.push_back(c);
            }
        }
        if(st.size() && temp=="..") st.pop();
        if(temp.size() > 0 && temp!="." && temp != "..") st.push(temp);

        stack<string> st2;
        while(st.size()){
            st2.push(st.top());
            st.pop();
        }
        while(st2.size()){
            ans.push_back('/');
            ans = ans + st2.top();
            st2.pop();
        }
        if(ans == "") ans ="/";
        return ans;
    }
};