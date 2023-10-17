class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Time Complexity : O(N) & Space Complexity : O(1)

        // a particular value in a given row
        long long ans=1;

        // the whole row to be returned 
        vector<int>ansRow(rowIndex+1,1);

        for(int col=0;col<rowIndex;col++){
            ans=ans*(rowIndex-col);
            ans=ans/(col+1);
            ansRow[col+1]=ans;
        }
        return ansRow;
    }
};