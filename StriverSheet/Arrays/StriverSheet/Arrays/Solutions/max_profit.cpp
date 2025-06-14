#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    // int maxProfit(vector<int>& prices) {
    //     int maxProfit=0;
    //     int maximumprofit=0;
    //     for(int i=0;i<prices.size();i++)
    //     {
    //         for(int j=i+1;j<prices.size();j++)
    //         {
    //             if(prices[j]>prices[i])
    //             {
    //                 maxProfit=prices[j]-prices[i];
    //                 maximumprofit=max(maximumprofit,maxProfit);
    //             }
    //         }
    //     }
    //     return maximumprofit;

    // }



int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];          
    int maxProfit = 0;                

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];      // Found a better day to buy
        } else {
            int profit = prices[i] - minPrice;  // Sell on current day
            maxProfit = max(maxProfit, profit); // Update max profit
        }
    }
    return maxProfit;
}

};
int main()
{
    Solution s;
    vector<int> nums = {9,8,7,6,5};
    cout<< s.maxProfit(nums);
    return 0;

}
