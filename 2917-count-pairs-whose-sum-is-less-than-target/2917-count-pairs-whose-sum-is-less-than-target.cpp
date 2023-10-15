class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i<j && nums[i]+nums[j]<target){
                    ans++;
                }
            }
        }
        return ans;
    }
};