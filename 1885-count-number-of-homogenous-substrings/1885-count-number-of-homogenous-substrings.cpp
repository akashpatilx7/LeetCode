class Solution {
public:
    int countHomogenous(string s) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        long long int MOD=1000000007;
        int ans=s.length();
        int cnt=1;

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                ans+=cnt;
                ans%=MOD;
                cnt++;
            }

            else{
                cnt=1;
            }
        }
        return ans;
    }
};