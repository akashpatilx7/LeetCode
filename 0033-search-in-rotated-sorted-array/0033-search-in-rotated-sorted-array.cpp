class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=nums.size();
        int low=0, high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target){
                return mid;
            }

            // check if the left half is sorted
            if(nums[low]<=nums[mid]){
                // check if the target lies in the left half
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }

                else{
                    low=mid+1;
                }
            }

            // check if the left half is sorted
            else{
                // check if the target lies in the right half
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }

                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};