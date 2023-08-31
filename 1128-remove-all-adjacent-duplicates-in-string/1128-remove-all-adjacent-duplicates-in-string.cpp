class Solution {
public:
    string removeDuplicates(string s) {
        // Time Complexity : O(1) & Space Complexity : O(N)

        stack<char>st;
        string ans;

        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }

            else if(s[i]==st.top()){
                st.pop();
            }

            else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){ // iterate till st.empty() is false i.e. there are elements still left in the stack
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};