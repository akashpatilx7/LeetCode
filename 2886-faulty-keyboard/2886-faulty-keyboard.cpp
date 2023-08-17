class Solution {
public:
    string finalString(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        string ans="";

        /*
        for(auto c:s){
            if(c=='i'){
                reverse(ans.begin(),ans.end());
            }

            else{
                ans+=c;
            }
        }
        */

        for(int i=0; i<s.length();i++){
            if(s[i]=='i'){
                reverse(ans.begin(),ans.end());
            }

            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};