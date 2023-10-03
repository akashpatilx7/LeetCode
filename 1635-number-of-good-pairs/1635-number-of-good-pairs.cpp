class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        unordered_map<int,int>umap;
        int goodPairs=0;

        for(int x:nums){
            if(umap.find(x)!=umap.end()){
                // the current number is already present in the unordered map
                goodPairs+=umap[x];
                umap[x]++;
            }

            else{
                umap[x]=1;
            }
        }
        return goodPairs;
    }
};