class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy =0;
        int sell = 1; 
        int maxprofit=0;
        while(sell<prices.size()){
            if (prices[sell]>prices[buy]){
               int profit=(prices[sell]-prices[buy]);
                maxprofit= max(maxprofit , profit);

            } else {
                buy=sell;
            }
            sell++;
        }
        return maxprofit;

        
    }
};
