class Solution {
public:
    vector<int> countBits(int n) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<int>ans(n+1,0);

        // ans[0] will always be 0, as 0 has 0 counting bits!
        for(int i=1;i<=n;i++){
            // i is odd
            if(i%2!=0){
                // add 1 to even's counting bits
                ans[i]=ans[i>>1]+1;
            }

            // i is even
            else{
                ans[i]=ans[i>>1];
            }
        }
        return ans;
    }
};