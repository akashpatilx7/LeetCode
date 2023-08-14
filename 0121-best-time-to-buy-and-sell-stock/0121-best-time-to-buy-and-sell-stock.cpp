class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        // min_price is the MINIMUM STOCK PRICE TILL THAT PARTICULAR DAY
        int min_price=INT_MAX;
        int profit=0;

        for(int i=0;i<prices.size();i++)
        {
            min_price=min(prices[i],min_price);

            // LOGIC : Assuming to SELL A PARTICULAR STOCK ON ith DAY, having BOUGHT IT ON SOMEDAY BEFORE 
            profit=max(prices[i]-min_price,profit);
        }
        return profit;
    }
};