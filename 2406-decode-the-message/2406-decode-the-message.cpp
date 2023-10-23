class Solution {
public:
    string decodeMessage(string key, string message) {
        // Time Complexity : O(N) & Space Complexity : O(26)

        unordered_map<char,char>umap;
        char ch='a';

        for(auto& i:key){
            if(i==' '){
                continue;
            }

            if(umap.count(i)==0){
                umap[i]=ch;
                ch++;
            }
        }      

        for(auto& i:message){
            if(umap.count(i)==1){
                i=umap[i];
            }
        }
        return message;
    }
};