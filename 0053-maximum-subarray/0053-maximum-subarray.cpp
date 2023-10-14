class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int subarraySum=0;
        int maxSubarraySum=INT_MIN;

        for(auto it:nums){
            subarraySum+=it;
            maxSubarraySum=max(maxSubarraySum,subarraySum);
            if(subarraySum<0){
                subarraySum=0;
            }
        }
        return maxSubarraySum;
    }
};