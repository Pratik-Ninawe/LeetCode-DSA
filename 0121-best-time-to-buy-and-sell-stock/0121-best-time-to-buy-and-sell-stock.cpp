class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxi=0;
        for(int i=1;i<prices.size();i++){
            if(buy>prices[i])
                buy=prices[i];
            maxi=max(maxi, prices[i]-buy);
        }
        return maxi;
    }
};