class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Time Complexity : O(1) & Space Complexity : O(N)

        unordered_map<int,int>umap;
        for(int x:arr){
            umap[x]++;
        }

        unordered_set<int>uset;
        for(auto& [x,c]:umap){
            if(uset.count(c)>=1){
                return 0;
            }
            uset.insert(c);
        }
        return 1;
    }
};