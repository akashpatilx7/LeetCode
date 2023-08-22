class Solution {
public:
    string removeDuplicates(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int i=0;
        stack<char>st;

        while(i<s.size()){
            if(st.empty() || s[i]!=st.top()){
                st.push(s[i]);
            }

            else{
                st.pop();
            }

            i++;
        }

        string ans="";

        while(!st.empty()){
            char ele=st.top();
            st.pop();
            ans+=ele;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};