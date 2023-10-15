class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        int n=hours.size();
        int ans=0;

        for(int i=0;i<n;i++){
            if(hours[i]>=target){
                ans++;
            }
        }
        return ans;
    }
};