class Solution {
public:
    int isSubsequence(string&s1, string&s2, int i, int j){
        // Time Complexity : O(N) & Space Complexity : O(1)

        // base case (end of the string)
        if(i==0 || j==0){
            return 0;
        }

        // if the current character matches with that of the subsequence
        else if(s1[i-1]==s2[j-1]){
            return 1+isSubsequence(s1,s2,i-1,j-1);
        }

        // if the current character does not match with that of the subsequence
        else{
            return isSubsequence(s1,s2,i,j-1);
        }
    }

    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();

        if(m>n){
            return false;
        }

        if(isSubsequence(s,t,m,n)==m){
            return true;
        }
        return false;
    }
};