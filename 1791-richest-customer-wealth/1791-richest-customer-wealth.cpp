class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;

        // Calculating the Number of Rows & Columns in the given 2-D Array/ Matrix
        int rows=accounts.size();
        int cols=accounts[0].size();    

        for(int i=0;i<rows;i++)
        {
            // Declaring a "wealth" Variable for the wealth of a Particular Customer
            int wealth=0;

            for(int j=0;j<cols;j++)
            {
                wealth+=accounts[i][j];
            }

            // Instead of using "if" Condition, use "max" Function 
            maxWealth=max(wealth,maxWealth);
        }

        return maxWealth;
    }
};