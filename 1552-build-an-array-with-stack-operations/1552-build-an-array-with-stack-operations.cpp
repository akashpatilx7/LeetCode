class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        // Time Complexity : O(target.size()) & Space Complexity : O(1)

        vector<string>ans;
        // idx is used to traverse the stream 
        int idx=1;
        // pos is used to traverse the array 
        int pos=0;

        while(pos<target.size()){
            ans.push_back("Push");

            // array & stream elements ----> match
            if(target[pos]==idx){
                // move the array pointer forward
                pos++;
            }

            // array & stream elements ----> don't match
            else{
                ans.push_back("Pop");
            }

            // move the stream pointer forward
            idx++;
        }
        return ans;
    }
};