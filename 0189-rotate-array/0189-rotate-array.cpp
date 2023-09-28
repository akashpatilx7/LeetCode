class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // rotating the array by 10 steps is equivalent to rotating it by 3 steps
        k%=nums.size();
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};