class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=nums.size();
        int pivotId=0, pivotCount=0;

        // finding the dropping point (pivotId)
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                pivotId=i;
                pivotCount++;
            }
        }

        // for an array to be sortable after right shifing some elements, there should be exactly 1 dropping point
        if(pivotCount>1){
            return -1;
        }

        if(pivotId==0){
            return 0;
        }

        if(nums[n-1]>nums[0]){
            return -1;
        }

        else{
            return n-pivotId;
        }
    }
};