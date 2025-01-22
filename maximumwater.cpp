#include<iostream>
#include<vector>
using namespace std;

//given a vector of length that is  height of water
//the index of array between two heights is considered as width
//the smallest of 2 heights is considered while calculating area
 
int maximumwater(vector<int>height) {
    
    int maxWater = 0; //ans
    int lp=0, rp=height.size()-1; //right and left pointers for height
   
   while(lp < rp) {
    int w= rp-lp; //width
    int ht= min(height[lp],height[rp]);//small height is considered to avoid overflow
    int currWater = w*ht;
    maxWater = max(maxWater,currWater);

    height[lp] < height[rp] ? lp++ : rp--;//always move the smallest height pointer 
   }
   return maxWater;
}

int main() {

vector<int>height={1,8,6,2,5,4,8,3,7};

cout << maximumwater(height);

   return 0;
}

