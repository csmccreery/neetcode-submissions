class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        bool holding_share = false;

        for (int i = 0; i < prices.size(); i++) {
            int today = prices[i];
            int tomorrow = (i + 1) >= prices.size() ? 
                prices[i] : prices[i + 1];

            bool buy = today < tomorrow; 
            if (buy && !holding_share) {
               profit -= prices[i];
               holding_share = true; 
            }

            if (!buy && holding_share) {
                profit += prices[i];
                holding_share = false;
            }
        }
        
        return profit;
    }
};