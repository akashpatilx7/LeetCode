class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]*=nums[i];
        }

        /*

        SYNTAX : 

        vector<int> v;
        sort(v.begin(), v.end());
        
        */

        sort(nums.begin(),nums.end());

        return nums;
    }
};