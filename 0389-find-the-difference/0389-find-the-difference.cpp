class Solution {
public:
    char findTheDifference(string s, string t) {
        // Time Complexity : O(N*logN) & Space Complexity : O(1)

        int n=s.length();

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }

        // as checked only till the last character of 's', not 't'
        return t[n];
    }
};