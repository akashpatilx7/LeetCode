class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        unordered_map<int,int>umap;
        stack<int>st;
        int n=nums2.size();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }

            int res;
            if(st.empty()){
                res=-1;
            }
            else{
                res=st.top();
            }

            // inserting the nums2[i] & its nge in the umap
            umap.insert({nums2[i],res});

            // inserting the nums2[i] in the stack (after finding its nge)
            st.push(nums2[i]);
        }

        vector<int>nge;
        for(auto x:nums1){
            nge.push_back(umap[x]);
        }

        return nge;
    }
};