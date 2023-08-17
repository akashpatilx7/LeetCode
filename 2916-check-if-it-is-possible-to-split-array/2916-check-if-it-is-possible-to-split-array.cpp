class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // Base Condition
        if(nums.size()<=2){
            return true;
        }

        // Recursive Condition
        for(int i=1;i<nums.size();i++){
            if(nums[i]+nums[i-1]>=m){
                return true;
            }
        }
        return false;
    }
};