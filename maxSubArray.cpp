#include <iostream>
#include <vector>
using namespace std;

//worked on online gdb

int maxSubArray(vector<int>nums) {
    int currSum =0, maxSum=INT_MIN;

    for(int val:nums) {
        currSum = currSum + val;
        maxSum=max(maxSum,currSum);

        if(currSum <0) { //if current sum is negative start from next element
            currSum=0;
        }
    }
    return maxSum;
}

int main()

{
    vector<int>nums={5,4,-1,7,8};
    maxSubArray(nums);

    return 0;
}