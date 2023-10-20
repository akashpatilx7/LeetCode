class Solution {
public:
    vector<string> cellsInRange(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<string>ans; // imp
        char col1=s[0], row1=s[1], col2=s[3], row2=s[4];

        for(int i=0;i+col1<=col2;i++){
            for(int j=0;j+row1<=row2;j++){
                string res;
                res+=col1+i; // adds column in string res
                res+=row1+j; // adds row in string res
                // 1 cell is ready, push back in ans
                ans.push_back(res);
            }
        }
        return ans;
    }
};