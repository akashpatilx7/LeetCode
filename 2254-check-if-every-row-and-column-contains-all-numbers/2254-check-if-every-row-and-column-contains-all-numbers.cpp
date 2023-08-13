class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        // Time Complexity : O(N^2) & Space Complexity : O(N) 

        int n=matrix.size();

        // Row-Wise Traversal 
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int>mp;
            for(int j=0;j<n;j++)
            {
                mp[matrix[i][j]]++;
            }

            for(int k=1;k<=n;k++)
            {
                if(mp.find(k)==mp.end())
                {
                    return false;
                }
            }
        }

        // Column-Wise Traversal
        for(int j=0;j<n;j++)
        {
            unordered_map<int,int>mp;
            for(int i=0;i<n;i++)
            {
                mp[matrix[i][j]]++;
            }

            for(int k=1;k<=n;k++)
            {
                if(mp.find(k)==mp.end())
                {
                    return false;
                }
            }
        }

        return true;
    }
};