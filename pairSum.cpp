#include <iostream>
#include <vector>
using namespace std;

//to find if sum of 2 elements in array is equal to target given
//brute force approach
//time complexity O(n^2)

vector<int>pairSum(vector<int>nums,int target)
{
  vector<int>ans;
  int n =nums.size();

  for(int i =0;i<n;i++){
    for(int j=i+1; j<n;j++) {
        if(nums[i]+nums[j]==target) {

            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
  }
return ans;
}

int main()
{
   vector<int>nums={2,7,11,5};
   int tar =9;
   vector<int>ans=pairSum(nums,tar);
   cout <<ans[0] << ", "<< ans[1]<<endl;
return 0;
}
