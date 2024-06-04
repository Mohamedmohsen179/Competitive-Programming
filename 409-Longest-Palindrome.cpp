class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
    for(int i=0;i<s.size();i++){
      mp[s[i]]++;
    }
    int ans=0;bool flg=false;
    for(auto i : mp){
      if (i.second %2==0){
        ans+=i.second;
      }
      else{
        ans+=i.second-1;
        flg=true;
      }
    }
    if(flg)return ans+1;
    return ans;
    }
};