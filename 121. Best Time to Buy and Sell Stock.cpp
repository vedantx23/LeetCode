class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices.size();
        int buy = prices[0];
        int profit = 0;
        for(int i = 0; i<l;i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            if(prices[i]-buy>profit){
                profit = prices[i]-buy;
            }
        }
        return profit;
    }
};