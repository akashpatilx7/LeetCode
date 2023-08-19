class Solution {
public:
    int maxDepth(string s) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int count=0;
        int maxDepth=INT_MIN;
        stack<char>st;

        for(char c : s){
            if(c=='('){
                st.push(c); // passing the element to be pushed in the stack to the push function is necessary!
                count++;
            }

            if(c==')'){
                st.pop();
                count=st.size(); // IMP : determining the count from the stack size 
            }

            if(count>maxDepth){
            maxDepth=count;
            }
        }

        return maxDepth;
    }
};