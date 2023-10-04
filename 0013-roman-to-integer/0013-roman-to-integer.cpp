class Solution {
public:
    int romanToInt(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int ans=0;
        unordered_map<char,int>umap;

        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;

        int n=s.length();

        for(int i=0;i<n;i++){
            if(i+1<n && umap[s[i]]<umap[s[i+1]]){
                // (i+1)th index exists in the given string
                ans+=umap[s[i+1]]-umap[s[i]];
                i++;
            }
            else{
                ans+=umap[s[i]];
            }
        }
        return ans;
    }
};