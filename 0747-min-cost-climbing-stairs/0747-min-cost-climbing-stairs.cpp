class Solution {
public:
    int minCostClimbingStairs1(vector<int>& cost, int index, vector<int>& memo){
        // base case 
        if(index==cost.size()-1 || index==cost.size()-2){
            return cost[index];
        }

        // use of dp
        if(memo[index]!=0){
            return memo[index];
        }

        // calculate memo of current index, if not already calculated
        int x=minCostClimbingStairs1(cost,index+1,memo);
        int y=minCostClimbingStairs1(cost,index+2,memo);

        memo[index]=min(x,y)+cost[index];
        return memo[index];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        // edge case
        if(cost.size()==2){
            return min(cost[0],cost[1]);
        }

        // memoization
        vector<int>memo(1001);
        
        // two possible calls at each current index
        int x=minCostClimbingStairs1(cost,0,memo);
        int y=minCostClimbingStairs1(cost,1,memo);

        return min(x,y);
    }
};