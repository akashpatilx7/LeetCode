class Solution {
public:
    int mySqrt(int x) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int ans=1;

        if(x==0){
            ans=0;
        }

        for(long i=1;i<=x;i++){
            if(i*i<=x){
                ans=i;
            }
            else{
                break;
            }
        }
        return ans;
    }
};