class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSofar = prices[0];
        int profit =0;
        int maxProfit = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            minSofar = min(minSofar,prices[i]);
            profit  = prices[i] - minSofar;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
        
    }
};


// part 2 solution 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i+1]>prices[i])
            {
                profit += prices[i+1] - prices[i];
            }
        }
        return profit;
    }
};


