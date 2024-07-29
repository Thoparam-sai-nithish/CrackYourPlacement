class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i:nums) 
            switch(i){
                case 0: z++ ; break;
                case 1: o++ ; break;
                case 2: t++ ; break;
            }
        for(int &i:nums){
            if(z-- > 0) i=0;
            else if(o-- > 0) i=1;
            else i=2; 
        }        
    }
};