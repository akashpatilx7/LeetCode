class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int iceCreamBars=0;
        int remCoins=coins;

        sort(costs.begin(),costs.end());

        for(int i=0;i<costs.size();i++)
        {
            if(costs[i]<=remCoins)
            {
                iceCreamBars++;
                remCoins=remCoins-costs[i];
                // remCoins-=costs[i];
            }
        }

        return iceCreamBars;
    }
};