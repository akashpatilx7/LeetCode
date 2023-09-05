class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // a new string (t) equal to (s), to make changes on & compare to (s) after making changes
        string t=s;
        for(int i=0;i<s.length()-1;i++){
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