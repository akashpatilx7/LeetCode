class Solution {
public:
    int maxDepth(string s) {
        // Time Complexity : O(1) & Space Complexity : O(1)

        int depth=0, maxDepth=0;

        for(char c : s){
            if(c=='('){
                depth++;
                maxDepth=max(depth,maxDepth);
            }

            if(c==')'){
                depth--;
            }
        }
        return maxDepth;
    }
};