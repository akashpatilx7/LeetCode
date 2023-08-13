class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // Time Complexity : O(N) & Space Complexity : O(N)

        int prev=0,max=0;

        for(int i=0;i<gain.size();i++)
        {
            prev+=gain[i];

            if(prev>max)
            {
                max=prev;
            }
        }
        return max;
    }
};