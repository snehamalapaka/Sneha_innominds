#include <iostream>
#include <vector>
using namespace std;

//no error
//online gdb not printing anything

int findduplicate(vector<int>arr) {
    int slow = arr[0], fast=arr[1];

    do {
        slow = arr[slow]; //+1
        fast = arr[arr[fast]]; //+2
    } while (slow !=  fast);

   //initialize slow to arr[0]
   slow = arr[0];

   //increment slow and fast both by 1
   //where slow and fast meet is the point 
   //where cycle starts

   while(slow != fast) {
    slow = arr[slow];//+1
    fast = arr[fast];//+1
   }

   return slow;
}

int main()
{
   vector<int>nums={3,1,3,4,2};

   cout << findduplicate(nums);

}