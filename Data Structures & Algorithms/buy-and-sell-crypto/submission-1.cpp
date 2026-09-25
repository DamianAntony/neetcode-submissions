class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int l=0;
        int maximumProfit =0;

        for(int i=0; i<prices.size(); i++){

           if(prices[i]<prices[l]){
            l=i;
           }else{
            int profit = prices[i]-prices[l];
            maximumProfit = max(maximumProfit , profit);
           }

    
        }
        return maximumProfit;
        
        
    }
};
