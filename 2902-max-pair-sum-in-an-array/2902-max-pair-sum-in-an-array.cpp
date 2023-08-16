class Solution {
private:
    int getMaxDigit(int n){
        int maxDigit=0;
        while(n>0){
            maxDigit=max(maxDigit,n%10);
            n/=10;
        }
        return maxDigit;
    }
    
public:
    // Time Complexity : O(N) & Space Complexity : O(1)
    
    int maxSum(vector<int>& nums) {
        int ans=-1;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(getMaxDigit(nums[i])==getMaxDigit(nums[j])){
                    ans=max(ans,nums[i]+nums[j]);
                }
            }
        }
        return ans;
    }
};