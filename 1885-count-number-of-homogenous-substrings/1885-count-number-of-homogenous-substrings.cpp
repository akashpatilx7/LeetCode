class Solution {
public:
    int countHomogenous(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)
        
        long long int MOD=1000000007;
        long long int res=0;
        int left=0, right=0;

        while(right<s.length()){
            if(s[left]==s[right]){
                res+=right-left+1;
                right++;
            }

            else{
                left=right;
                res+=1;
                right++;
            }
        }
        return res%MOD;
    }
};