class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        // Time Complexity : O(N*N) & Space Complexity : O(1)

        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int index=i;
            int count=0;

            while(index>0){
                if(index%2==1){
                    count++;
                }

                index/=2;
            }

            if(count==k){
                ans+=nums[i];
            }
        }
        return ans;
    }
};