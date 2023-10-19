class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Time Complexity : O(N) & Space Complexity : O(N) 
        
        unordered_map<char,bool>umap;

        for(int i=0;i<jewels.length();i++){
            umap[jewels[i]]=true;
        }

        int count=0;
        for(int i=0;i<stones.length();i++){
            if(umap[stones[i]]==true){
                count++;
            }
        }
        return count;
    }
};