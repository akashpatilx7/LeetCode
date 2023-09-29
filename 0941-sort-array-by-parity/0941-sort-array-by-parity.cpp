class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Two Pointer's Approach : Time Complexity : O(N) & Space Complexity : O(1)

        int i=0,j=nums.size()-1;

        while(i<j){
            if(nums[i]%2==1 && nums[j]%2==0){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }

            else if(nums[i]%2==0){
                i++;
            }

            else{
                // i and j, both pointing towards odd numbers
                j--;
            }
        }

        return nums;
    }
};