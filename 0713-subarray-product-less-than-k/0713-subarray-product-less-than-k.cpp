class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0,end=0,count=0,prod=1;

        while(end<nums.size()){
            prod*=nums[end];

            while(start<=end && prod>=k){
                prod/=nums[start];
                start++;
            }

            count+=end-start+1;
            end++;
        }
        return count;
    }
};