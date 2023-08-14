class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentGas=0;
        int totalGas=0;
        int startIndex=0;

        for(int i=0;i<gas.size();i++)
        {
            currentGas+=gas[i]-cost[i];

            totalGas+=gas[i]-cost[i];

            // If solution exits, Net currentGas Value should be Positive (i.e. currentGas>=0)
            if(currentGas<0)
            {
                startIndex=i+1;
                currentGas=0;
            }        
        }

        return totalGas>=0?startIndex:-1;
    }
};