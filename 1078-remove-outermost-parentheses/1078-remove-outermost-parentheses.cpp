class Solution {
public:
    string removeOuterParentheses(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        string ans;
        stack<char>st;

        for(auto x : s){
            if(x=='('){
                if(st.size()>0){
                    ans.push_back(x);
                }
                st.push(x);
            }

            if(x==')'){
                st.pop();
                if(!st.empty()){
                    ans.push_back(x);
                }
            }
        }

        return ans;
    }
};