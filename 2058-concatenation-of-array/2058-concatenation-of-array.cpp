class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        // If not defined, the code gets into an INFINITE LOOP
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }

        return nums;
    }
};