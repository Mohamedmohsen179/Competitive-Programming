class Solution {
public:
    string reversePrefix(string word, char ch) {
        int p=1;
        for(int i =0;i<word.size();i++){
            if (word[i]==ch){
                p+=i;
                break;
            }
        }
        reverse(word.begin(),word.begin()+p);
        return word;
    }
};