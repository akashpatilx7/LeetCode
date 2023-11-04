class Solution {
public:
    string longestPalindrome(string s) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)

        int start=0;
        int maxLength=1; // the minimum possible size of a palindromic substring is 1 (a single character)
        
        for(int i=1;i<s.size();i++){
            // Even
            int l=i-1;
            int r=i;

            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxLength){
                    maxLength=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }

            // Odd
            l=i-1;
            r=i+1;

            while(l>=0 && r<s.size() && s[l]==s[r]){
                if(r-l+1>maxLength){
                    maxLength=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
        }

        return s.substr(start,maxLength);
    }
};