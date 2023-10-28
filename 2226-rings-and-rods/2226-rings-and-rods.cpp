class Solution {
public:
    int countPoints(string rings) {
        // Time Complexity : O(N) & Space Complexity : O(N)
         
        unordered_map<int,unordered_set<char>>umap;
        for(int i=1;i<rings.length();i+=2){
            umap[rings[i]-'0'].insert(rings[i-1]);
        }

        int count=0;
        for(int i=0;i<10;i++){
            if(umap.find(i)!=umap.end()){
                if(umap.at(i).size()==3){
                    count++;
                }
            }
        }
        return count;
    }
};