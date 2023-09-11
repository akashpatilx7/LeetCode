class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // Time Complexity : O(logN) [Worst Case TC : O(N/2)] & Space Complexity : O(1)

        int n=nums.size();
        int low=0, high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                return true;
            }

            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;    // low=low+1;
                high--;   // high=high-1;
                continue;
            }

            // check if the left half is sorted
            if(nums[low]<=nums[mid]){
                // check if target exists in the left half
                if(nums[low]<=target && target<nums[mid]){
                    high=mid-1;
                }

                else{
                    low=mid+1;
                }
            }

            // check if the right half is sorted
            if(nums[mid]<=nums[high]){
                // check if target exists in the right half
                if(nums[mid]<target && target<=nums[high]){
                    low=mid+1;
                }

                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};