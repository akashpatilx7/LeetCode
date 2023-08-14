class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        vector<int>target;
        
        for(int i=0;i<nums.size();i++)
        {
            // NOTE : Remember the Syntax
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;  
    }
};