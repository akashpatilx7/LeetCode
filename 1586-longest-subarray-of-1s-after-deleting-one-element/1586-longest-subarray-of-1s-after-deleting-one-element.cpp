class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // Time Complexity : O(N) & Space COmplexity : O(1)

        // 'end' is used to traverse the array!

        int start=0, end=0;
        int noOfZeroes=0;
        int ans=0;

        while(end<nums.size()){
            // updating the noOfZeroes
            if(nums[end]==0){
                noOfZeroes++;
            }

            if(noOfZeroes>1){
                if(nums[start]==0){
                    noOfZeroes--;
                }

                // if noOfZeroes becomes 2, make it 1, increase the start pointer
                start++;
            }

            ans=max(ans,end-start);

            // if both the above conditions are not fulfilled, don't do anything! just increase the end pointer
            end++;
        }
        return ans; 
    }
};