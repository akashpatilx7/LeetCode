class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=candies.size();
        vector<bool>result;
        int maxi=0;

        for(int i=0;i<n;i++){
            maxi=max(maxi,candies[i]);
        }

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxi){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};