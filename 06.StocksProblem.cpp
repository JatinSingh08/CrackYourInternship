class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mnBuyPrice = INT_MAX,profit=0,mxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mnBuyPrice){
                mnBuyPrice = prices[i];
            }
            profit = prices[i]-mnBuyPrice;
            mxProfit=max(mxProfit,profit);
        }
        return mxProfit;
        
    }
};
