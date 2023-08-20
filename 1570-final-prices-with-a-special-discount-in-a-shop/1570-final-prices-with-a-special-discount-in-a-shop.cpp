class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        // Monotonic Stack : stack containing elements in increasing/ decreasing fashion

        // Monotonically Increasing Stack ----> Bucket 
        // Monotonically Decreasing Stack ----> Pyramid

        // Next & Previous Smaller Element ----> Increasing (Monotonically) Stack
        // Next & Previous Greater Element ----> Decreasing (Monotonically) Stack

        stack<int>st;
        vector<int>ans=prices;

        for(int i=0;i<prices.size();i++){
            while(!st.empty() && prices[st.top()]>=prices[i]){
                ans[st.top()]=prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};