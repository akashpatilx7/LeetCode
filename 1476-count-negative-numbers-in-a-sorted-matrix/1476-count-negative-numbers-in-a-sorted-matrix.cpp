class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Time Complexity :O(N*N) & Space Complexity : O(1) 

        int i,j;
        int m=grid.size();
        int n=grid[i].size();
        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]<0){
                    ans++;
                }
            }
        }
        return ans;
    }
};