class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        string t=s;
        for(int i=0;i<s.size()-1;i++){
            // not reversing the string, only checking if a substring is being repeated or not!
            t.push_back(t[0]);
            t.erase(0,1);

            if(s==t){
                return true;
            } 
        }
        return false;
    }
};