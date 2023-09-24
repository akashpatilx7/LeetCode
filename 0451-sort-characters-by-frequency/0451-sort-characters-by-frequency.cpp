class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>umap;
        vector<string>bucket(s.size()+1,"");

        string res;

        for(char c:s){
            umap[c]++;
        }

        for(auto&it:umap){
            char c=it.first;
            int n=it.second;
            bucket[n].append(n,c);
        }

        for(int i=s.size();i>0;i--){
            if(!bucket[i].empty()){
                res.append(bucket[i]);
            }
        }

        return res;
    }
};