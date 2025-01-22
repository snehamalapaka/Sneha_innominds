#include <iostream>
#include <vector>
using namespace std;


// to find if some of three elements in array equals zero
vector<vector<int>> threeSum(vector<int>nums) {
    int n =nums.size();
    vector<vector<int>>ans;

    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++) {
        if(i>0 && nums[i]==nums[i-1]) continue;

        int j =i+1, k=n-1;
        //i points to 0th idx, j points to first idx and k points to last idx initially
        // we put i fixed and try to get other 2 elements by moving j and k pointers to make triplet with i so that sum is 0
        //in one iteration i is fixed , j and k move
        while (j < k)
        {
            int sum = nums[i]+nums[j]+nums[k];
            if(sum<0) {
                j++;  // if sum<0 to inc sum we should move j to right
            }else if(sum>0) { //if sum>0 we should dec sum so move k to left
                k--;
            }else {
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
                while(j<k && nums[j]== nums[j-1])  j++;
            }
        }
        

    }
    return ans;

}

int main() {
    vector<int>nums;
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(4);
   cout <<threeSum(nums);

   
}
