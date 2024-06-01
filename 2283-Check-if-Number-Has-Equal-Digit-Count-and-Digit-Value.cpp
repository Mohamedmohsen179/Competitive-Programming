class Solution {
public:
    bool digitCount(string num) {
 
        map<int,int>m;

        for (int i=0;i<num.size();i++){
            int digit = num[i] - '0';
            m[digit]++;
        }
        
        for(int i=0;i<num.size();i++){
            int The_num = num[i]-'0';
            if (m[i] != The_num){
            return false;
            }
        }
         return true;
    }
};