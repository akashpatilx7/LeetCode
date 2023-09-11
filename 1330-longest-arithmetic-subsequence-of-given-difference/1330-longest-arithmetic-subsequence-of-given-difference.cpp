class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int n=arr.size();
        unordered_map<int,int>mp;
        int ans=1; // atleast 1 subsequence always exists, having a single element

        for(auto x:arr){
            if(mp.count(x-difference)){
                // if the previous element of the subsequence according to rule i.e. (arr[x]-difference) exists in the array
                mp[x]=mp[x-difference]+1;
            }

            else{
                // start a new subsequence from the current array element itself
                mp[x]=1;
            }
            ans=max(ans,mp[x]);
        }
        return ans;
    }
};