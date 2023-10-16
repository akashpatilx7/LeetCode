class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // int n=encoded.size();

        vector<int>arr(encoded.size()+1);
        arr[0]=first;

        for(int i=0;i<encoded.size();i++){
            // NOTE : as the first element of the original array is already given the loop will only run n times, & not n-1 times!
            arr[i+1]=arr[i]^encoded[i];
        }
        return arr;
    }
};