class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // The first occurrence updates for the first time you find the target, while the last occurrence updates every time you find the target.

        vector<int>ans;
        int n=nums.size();
        int firstOccurence=-1, lastOccurence=-1;
        

        for(int i=0;i<n;i++){
            if(nums[i]==target && firstOccurence==-1){
                firstOccurence=i;
                lastOccurence=i;
            }

            else if(nums[i]==target && firstOccurence!=-1){
                lastOccurence=i;
            }
        }

        ans.push_back(firstOccurence);
        ans.push_back(lastOccurence);
        return ans;
    }
};