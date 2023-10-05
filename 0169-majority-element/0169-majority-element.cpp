class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int n=nums.size();
        int majorityElement=0;
        unordered_map<int,int>umap;

        for(auto x:nums){
            umap[x]++;
        }

        for(auto x:umap){
            if(x.second>floor(n/2)){
                majorityElement=x.first;
            }
        }
        return majorityElement;
    }
};