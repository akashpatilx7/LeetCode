class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        
        // Two Pointer Approach

        int i=m-1;
        int j=n-1;

        int k=m+n-1;

        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k--]=nums1[i--];
            }

            else
            {
                nums1[k--]=nums2[j--];
            }
        }

        // If all the elements of 1 of the 2 Given Arrays are placed in the Final Merged Array
        while(i>=0)
        {
            // Place the remaining elements from nums1 into nums1
            nums1[k--]=nums1[i--];
        }

        while(j>=0)
        {
            // Place the remaining elements from nums2 into nums1
            nums1[k--]=nums2[j--];
        }
    }
};