class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int start = 0, end = 1, maxprofit = 0;
       while(end < prices.size()){
        if(prices[end] > prices[start]){
            int sum = prices[end] - prices[start];
            maxprofit = max(maxprofit, sum);
        }else
        start = end;
        end++;
       } 
       return maxprofit;
    }
};
