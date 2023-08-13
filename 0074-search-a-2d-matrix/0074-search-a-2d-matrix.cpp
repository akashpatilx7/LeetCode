class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Time Complexity : O log(M*N) & Space Complexity : O(1)

        if(!matrix.size()){
            return false;
        }

        int m=matrix.size();
        int n=matrix[0].size();

        /*
        int i=0, j=n-1;

        while(i<m & j>=0){
            if(matrix[i][j]==target){
                return true;
            }

            if(matrix[i][j]<target){
                i++;
            }

            else{
                j--;
            }
        }
        return false;
        */

        int low=0, high=(m*n)-1;

        while(low<=high){
            int mid=(low+(high-low)/2);

            if(matrix[mid/n][mid%n]==target){
                return true;
            }

            if(matrix[mid/n][mid%n]<target){
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }
        return false;
    }
};