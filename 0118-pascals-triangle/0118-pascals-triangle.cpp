class Solution {
public:
    vector<int>generateRow(int row){
        // Time Complexity : O(N*N) & Space Complexity : O(N)

        // given a particular row number, the above function will generate the whole row

        long long ans=1;

        vector<int>ansRow;
        ansRow.push_back(1);

        // 0 based indexing of the col, but first col is already filled (always 1)
        for(int col=1;col<row;col++){
            // col<row because nth row---->n elements (also consider 0 based indexing)
            ans=ans*(row-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        for(int i=1;i<=numRows;i++){
            res.push_back(generateRow(i));
        }
        return res;
    }
};