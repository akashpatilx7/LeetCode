class Solution {
public:
    vector<string> cellsInRange(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)
        
        vector<string>ans;
        char col1=s[0], row1=s[1], col2=s[3], row2=s[4];

        for(int i=0;i+col1<=col2;i++){
            for(int j=0;j+row1<=row2;j++){
                string res;
                res+=(col1+i);
                res+=(row1+j);
                ans.push_back(res);
            }
        }
        return ans;

    }
};