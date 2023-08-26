class Solution {
    public int maxProfit(int[] prices) {
        int prof=0,minpr=prices[0];
        for(int i=1;i<prices.length;i++)
        {
            minpr=Math.min(minpr,prices[i]);
            prof=Math.max(prof,prices[i]-minpr);
        }
        return prof;
        
    }
}