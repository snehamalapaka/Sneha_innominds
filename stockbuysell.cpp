#include <iostream>
#include <vector>
using namespace std;

//worked on online gdb

int stockbuysell(vector<int>prices) {
    int maxProfit =0, bestBuy = prices[0];
    for(int i=1;i<prices.size();i++) {
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