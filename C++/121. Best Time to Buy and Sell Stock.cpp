class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector <int> maxDiff;
        int minPrice=prices[0];
        int profit=0;
        for (int i = 0; i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            profit=max(profit,prices[i]-minPrice);
        }
        return profit;
    }
};
