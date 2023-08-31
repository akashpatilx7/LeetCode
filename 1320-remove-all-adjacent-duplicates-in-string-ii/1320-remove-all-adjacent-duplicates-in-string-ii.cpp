class Solution {
public:
    string removeDuplicates(string s, int k) {
        // whenever we need to check the previous elements/ characters, we can use a stack!

        // Time Complexity : O(N) & Space Complexity : O(N)

        int n=s.size();

        if(n<k){
            return s;
        }

        stack<pair<char,int>>stack;

        for(int i=0;i<n;i++){
            // pushing a new character (pair)
            if(stack.empty() || s[i]!=stack.top().first){
                stack.push({s[i],1});
            }

            // updating the character count (in pair)
            else{
                auto prev=stack.top();
                stack.pop();
                stack.push({s[i],prev.second+1});
            }

            // if character count >=k, pop it!
            if(stack.top().second==k){
                stack.pop();
            }
        }

        string ans="";

        while(!stack.empty()){
            auto curr=stack.top();
            stack.pop();
            while(curr.second--){
                ans+=curr.first;
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};