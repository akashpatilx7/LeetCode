class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Time Complexity : O(M+N) & Space Complexity : O(1) ----> TWO POINTER APPROACH 

        int i;
        int count=0;
        int m=grid.size();
        int n=grid[i].size();
        int row=m-1, col=0;
        
        while(row>=0 && col<n){
            if(grid[row][col]<0){
                row--;
                count+=n-col;
            }

            else{
                col++;
            }
        }
        return count;
    }
};