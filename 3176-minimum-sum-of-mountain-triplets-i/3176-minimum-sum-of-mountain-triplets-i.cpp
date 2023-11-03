class Solution {
public:
    int minimumSum(vector<int>& nums) {
        // Time Complexity : O(N*N*N) & Space Complexity : O(1)

        int minimumSum=INT_MAX;
        int sum=0;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]<nums[j] && nums[k]<nums[j]){
                        sum=nums[i]+nums[j]+nums[k];
                        minimumSum=min(minimumSum,sum);
                    }
                }
            }
        }

        if(minimumSum==INT_MAX){
            minimumSum=-1;
        }

        return minimumSum;
    }
};