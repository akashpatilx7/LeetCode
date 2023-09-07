class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Time Complexity : O(N) & Space Complexity : O(1)
        
        int n = nums.size();
        int i = 0;
        int j = n-1;

        while(i<j-1){
            int mid = (i+j)/2;
            if (nums[i] <= nums[mid]){
                if(target>=nums[i] && target <=nums[mid]){
                    if (nums[mid] == target) 
                        return mid;
                    j=mid;

                    while(i<j-1){
                        mid = (i+j)/2;
                        if(nums[mid]<=target){
                            i=mid;
                        }
                        else j = mid;
                    }
                    if (nums[i] == target){
                        return i;
                    }
                    else return -1;
                }
                else
                {
                    i=mid;
                }

            }
            else if (nums[mid] <= nums[j])
            {
                if(target>=nums[mid] && target<=nums[j])
                {
                     if (nums[j] == target) 
                        return j;
                    i=mid;
                    while(i<j-1)
                    {
                        mid = (i+j)/2;
                        if(nums[mid]<=target){
                            i=mid;
                        }
                        else j = mid;

                    }
                    if (nums[i] == target) return i;
                    else return -1;
               }
               else
               {
                    j=mid;
               }

            }
        }
        if (nums[i] == target) return i;
        if (nums[j] == target) return j;
        else return -1;
    }
};