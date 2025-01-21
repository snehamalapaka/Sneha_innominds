#include <iostream>
#include <vector>
using namespace std;

int majorelement(vector<int>&nums)
{
  int n =nums.size();
 
  //sort is ascending order
  sort(nums.begin(),nums.end());
 int ans=0;
  for(int i=1;i<n;i++){
    int freq =1; 
      ans = nums[i];
    if(nums[i-1]==nums[i]) {
        freq++;
    }else {
        freq=1;
        ans=nums[i];
        //return ans;
    }
  }
  return ans;
}

int main()
{

 vector<int>nums;
 nums.push_back(2);
 nums.push_back(1);
 nums.push_back(1);
 nums.push_back(2);
 nums.push_back(2);
 nums.push_back(1);
 nums.push_back(2);
 

int ans= majorelement(nums);

 cout<<ans;

return 0;
}