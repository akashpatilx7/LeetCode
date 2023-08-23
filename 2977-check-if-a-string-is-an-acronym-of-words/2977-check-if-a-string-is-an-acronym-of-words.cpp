class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        // Time Complexity : O(M)----> No. Of Rows & Space Complexity : O(1)

        int i, j;
        int m=words.size();
        int n=words[i].size();
        string res="";

        for(int i=0;i<m;i++){
            res.push_back(words[i][0]);
        }

        if(res==s){
            return true;
        }
        return false;
    }
};