#include <iostream>
#include <vector>
using namespace std;

//not sure how to print o/p

void sortnums(vector<int>nums) {
    int n= nums.size();
    int low =0, mid=0, high =n-1;

   while(mid<=high) {
    if(nums[mid]==0)
    {
        swap(nums[mid],nums[0]);
        mid++; low++;

    } else if (nums[mid]==1) {
        mid++;
    } else {
        swap(nums[mid],nums[high]);
        high--;
    }
   }

}



int main() 
{
  vector<int>nums={2,0,2,1,1,0,1,2,0,0};
  int n =10;

  sortnums(nums);
  //how to print?

   
}
