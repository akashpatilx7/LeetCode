class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        // If the Array contains only 1 Element 
        if(nums.size()==1)
        {
            return nums[0];
        }

        // If the Array contains 2 Elements
        if(nums[0]!=nums[1])
        {
            // return the FIRST ELEMENT
            return nums[0];
        }

        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            // return the LAST ELEMENT (Corner Case)
            return nums[nums.size()-1];
        }

        // Apply Binary Search 

        int left=0,right=nums.size()-1;

        while(left<=right)
        {
            int mid=(left+right)/2;

            // LOGIC : THE FIRST OCCURENCE OF AN ELEMENT APPEARING IN PAIRS IN AN ARRAY IS ALWAYS AT AN EVEN INDEX.
            if(nums[mid]==nums[mid+1] && mid%2==0 || nums[mid]==nums[mid-1] && mid%2==1)
            {
                // No DISORDERING OF ARRAY till now 
                left=mid+1;
            }

            else
            {
                // ARRAY has been DISORDERED
                right=mid-1;

            }

            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            {
                return nums[mid];
            }
        }

    return -1;  
    }
};