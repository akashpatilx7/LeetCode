class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // Time Complexity : O(N) & Space Complexity : O(N)
        
        int searchIndex=0;
        int count=0;

        if(ruleKey=="color")
        {
            searchIndex=1;
        }

        else if(ruleKey=="name")
        {
            searchIndex=2;
        }

        for(int i=0;i<items.size();i++)
        // NOTE : Use of .length() is PROHIBITED with VECTOR !!!
        {
            if(items[i][searchIndex]==ruleValue)
            {
                count++;
            }
        }
        return count;
    }
};