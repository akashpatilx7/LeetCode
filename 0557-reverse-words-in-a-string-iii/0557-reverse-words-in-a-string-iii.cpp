class Solution {
public:
    string reverseWords(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        string res="";
        string word="";

        for(char ch:s){
            if(ch!=' '){
                word+=ch;
            }

            else{
                reverse(word.begin(),word.end());
                res+=word+' ';
                word="";
            }
        }

        // last word
        reverse(word.begin(),word.end());
        res+=word;

        return res;
    }
};