class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int m=word1.size();
        int n=word2.size();
        string concat1="";
        string concat2="";

        for(int i=0;i<m;i++){
            concat1+=word1[i];
        }

        for(int i=0;i<n;i++){
            concat2+=word2[i];
        }

        if(concat1.length()>concat2.length()){
            for(int i=0;i<concat1.length();i++){
                if(concat1[i]!=concat2[i]){
                    return false;
                }
            }
            return true;
        }

        else{
            for(int i=0;i<concat2.length();i++){
                if(concat1[i]!=concat2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};