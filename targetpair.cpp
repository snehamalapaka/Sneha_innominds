#include <iostream>
#include <vector>
using namespace std;

//optimal approach to find if pair sum equals target
//time complexity O(n)
//array arranged in ascending order




vector<int>targetpair(vector<int>nums,int target) {
    vector<int>ans;
    int n =nums.size();

    int i=0;
    int j=n-1;
    // 2 pointers i from front and j from back

    while(i<j){

    if(nums[i]+nums[j]>target){ //we know by decreasing j(moving j to left) sum decreases as array is arranged in ascending order
        j--;
    }
    else if(nums[i]+nums[j]<target)//if sum is less tahn target we need to increase sum by moving i to right
    {
        i++;
    }else {
        // i+j == target
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
  }
  return ans;
}

int main()
{

    vector<int>nums={2,7,11,15};
    int tar = 26;
    vector<int>ans=targetpair(nums,tar);
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;


}
