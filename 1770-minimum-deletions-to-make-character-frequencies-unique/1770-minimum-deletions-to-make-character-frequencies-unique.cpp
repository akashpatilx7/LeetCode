class Solution {
public:
    int minDeletions(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        // calculating the frequencies of each character 
        unordered_map<char,int>umap;
        for(char c:s){
            umap[c]++;
        }


        unordered_set<int>uset;
        int ans=0;

        for(auto& k:umap){

            int freq=k.second; // k is used for traversing the unordered map and not umap

            while(freq>0 && uset.find(freq)!=uset.end()){
                freq--;
                ans++;
            }
            // inserting the frequency in the unordered set if & only if it is unique!
            uset.insert(freq);
        }
        return ans;
    }
};