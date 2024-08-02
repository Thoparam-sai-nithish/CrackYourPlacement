class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> pts;
        for(int i=0;i<matrix.size();i++) 
            for(int j=0;j<matrix[0].size();j++)
                if(matrix[i][j]==0)
                pts.push_back({i,j});
        
        while(!pts.empty()){
            int I = pts.back().first, J = pts.back().second;
            for(int i=0;i<matrix.size(); i++) matrix[i][J] = 0;
            for(int j=0;j<matrix[0].size(); j++) matrix[I][j] = 0;
            pts.pop_back();
        }
    }
};