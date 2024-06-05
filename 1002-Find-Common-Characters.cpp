class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
     map<char,int>all;
        for (char c : words[0]) {
          all[c]++;
        }

        vector<string>ans;

        for (int i =1;i<words.size();i++){
          
          map<char,int>crnt;
          
          for (char c : words[i])crnt[c]++;
          
          bool flg=true;

          for (auto a : all){
            for (auto c : crnt){
              if (a.first == c.first){
                all[a.first]=min(a.second,c.second);
                flg=false;
              }
            }
            if(flg)all[a.first]=0;
            flg=true;
          }
        }
        for (auto i : all) {
          while (i.second--)ans.push_back(string(1, i.first)); 
        }
        return ans;
    }
};