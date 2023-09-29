class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int evenIndex=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[evenIndex]);
                evenIndex++;
            }
        }

        return nums;
    }
};