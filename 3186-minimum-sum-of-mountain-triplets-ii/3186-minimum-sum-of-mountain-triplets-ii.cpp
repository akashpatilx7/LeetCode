class Solution {
public:
    int minimumSum(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=nums.size();

        vector<int>leftMin(n,0);
        vector<int>rightMin(n,0);

        int temp=nums[0];
        for(int i=1;i<n;i++){
            leftMin[i]=temp;
            temp=min(temp,nums[i]);
        }

        temp=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightMin[i]=temp;
            temp=min(temp,nums[i]);
        }

        int minimumSum=INT_MAX;
        for(int j=1;j<n-1;j++){
            int i=leftMin[j];
            int k=rightMin[j];
            if(i<nums[j] && k<nums[j]){
                int sum=i+k+nums[j];
                minimumSum=min(minimumSum,sum);
            }
        }

        if(minimumSum==INT_MAX){
            minimumSum=-1;
        }

        return minimumSum;
    }
};