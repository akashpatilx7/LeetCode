class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<int>even;
        vector<int>odd;

        for(int x:nums){
            if(x%2==0){
                even.push_back(x);
            }

            else{
                odd.push_back(x);
            }
        }

        for(int x:odd){
            even.push_back(x);
        }

        return even;
    }
};