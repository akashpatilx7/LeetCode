class Solution {
public:
    string removeDuplicateLetters(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<int>lastIndex(26,0);
        for(int i=0;i<s.length();i++){
            lastIndex[s[i]-'a']=i;
        }

        vector<bool>considered(26,false);
        stack<char>st;

        for(int i=0;i<s.length();i++){
            // if the current character is already considered
            if(considered[s[i]-'a']==true){
                continue;
            }

            // if the current character is not already considered
            while(st.size()>0 && st.top()>s[i] && i<lastIndex[st.top()-'a']){
                // smallest in lexicographical order && the current index is not the last index of the current character
                considered[st.top()-'a']=false;
                st.pop();
            }

            st.push(s[i]);
            considered[s[i]-'a']=true;
        }

        string res="";
        while(st.size()>0){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};