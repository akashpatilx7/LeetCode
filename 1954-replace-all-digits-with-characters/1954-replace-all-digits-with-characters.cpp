class Solution {
public:
    string replaceDigits(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        for(int i=1;i<s.length();i+=2){
            s[i]=(int)s[i]-48 + (int)s[i-1];
            // converting the s[i]th character to integer
            // s[1]=(int)s[1]-48 + (int)s[0]
            // s[1]=(int)'1'-48 + (int)'a'
            // s[1]=1+97
            // s[1]=98 i.e. 'b'
        }
        return s;
    }
};