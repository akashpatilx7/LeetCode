class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>answer;
        int n=nums.size();
        int sum=0;

        // 1. calculate the leftSum
        vector<int>leftSum;
        for(int i=0;i<n;i++){
            leftSum.push_back(sum);
            sum+=nums[i];
        }

        // 2. calculate the rightSum
        sum=0;
        vector<int>rightSum(n,0);
        for(int i=n-1;i>=0;i--){
            rightSum[i]=sum;
            sum+=nums[i];
        }

        // 2. calculate the absolute difference between the both
        for(int i=0;i<n;i++){
            answer.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return answer;
    }
};