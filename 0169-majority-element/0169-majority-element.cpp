class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Time Complexity : O(NlogN) & Space Complexity : O(1)

        // LOGIC : As the question defines Majority Element to be appearing more than floor(n/2) times, after sorting the array, the majority element will always be in the middle, from wherever its group is starting in the array! (at front, at back, in middle)
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[(int) n/2];
    }
};