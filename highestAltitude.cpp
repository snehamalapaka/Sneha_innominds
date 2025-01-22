#include <iostream>
#include <vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
        int n =gain.size();
       
        int heighest=-90;
        int current;
        vector<int>ans;
        
        vector<int>alt(n+1,0);
        int m = alt.size();
        for(int i=1;i<m;i++) {
            alt[i]=alt[i-1]+gain[i-1];
        }

        //max altitude
        for(int i=0;i<m;i++) {
            current =alt[i];
            heighest=max(current,heighest);
            
        }
        return heighest;

        
    }
    int main()
    {
        vector<int>gain;
        gain.push_back(-5);
        gain.push_back(1);
        gain.push_back(5);
        gain.push_back(0);
        gain.push_back(-7);
        
    }