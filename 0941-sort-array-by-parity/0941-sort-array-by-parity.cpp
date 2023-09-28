class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        vector<int>even;
        vector<int>odd;

        for(auto i:nums){
            if(i&1){ // i&1 is TRUE (i&1==1)
                odd.push_back(i);
            }
            else{
                even.push_back(i);
            }
        }
        while(!odd.empty()){
            even.push_back(odd.back());
            odd.pop_back();
        }
        return even;
    }
};