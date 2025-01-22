#include <iostream>
#include <vector>
using namespace std;

//to sort 0s 1s 2s using dutch national flag algorithm

void sortnums(vector<int>nums) {
    int n= nums.size();//take 3 pointers low mid high
    // 0 to low-1 should have 0s
    //low to mid-1 should have 1s
    //mid to high has all unsorted elements
    //high +1 to n-1 has all 2s
    
    int low =0, mid=0, high =n-1;

   while(mid<=high) { //lets assume initially whole array is unsorted , it lies between mid to high
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
