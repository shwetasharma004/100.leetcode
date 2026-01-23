class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy[100000];

        int n = prices.size();
        if (n == 0) return 0;

        bestbuy[0]=INT_MAX;
        for(int i=1; i<n; i++){
            bestbuy[i]=min(prices[i-1], bestbuy[i-1]);
        }
        int maxProfit = 0; 
        for(int  i=0; i<n; i++){
            int currProfit = prices[i]-bestbuy[i];
            maxProfit = max(maxProfit, currProfit);
        }
        return maxProfit;
    }
};