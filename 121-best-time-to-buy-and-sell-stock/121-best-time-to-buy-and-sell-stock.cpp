class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =  prices.size();
        int res = 0,maxi=0;
        int minP = INT_MAX,maxP=0;
        for(int i=0;i<n;i++){
            minP = min(minP,prices[i]);
            maxP = max(maxP,prices[i]-minP);
            
            
    }
        return maxP;
    }
};