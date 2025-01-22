#include <iostream>
#include <vector>
using namespace std;

//to calc max profit from stocks if given array of prices, idx is the day
//lets assume everyday as selling day
//as we cant sell bedore we buy lets start from day 1 not day 0

int stockbuysell(vector<int>prices) {
    int maxProfit =0, bestBuy = prices[0];
    //loop from day i to calc max profit if we sell on day i, i starts from day 1
    for(int i=1;i<prices.size();i++) { //given array of prices
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxProfit;
}

int main()
{

vector<int>nums;
nums.push_back(7);
nums.push_back(1);
nums.push_back(5);
nums.push_back(3);
nums.push_back(6);
nums.push_back(4);
stockbuysell(nums);
cout << stockbuysell(nums);



return 0;
}
