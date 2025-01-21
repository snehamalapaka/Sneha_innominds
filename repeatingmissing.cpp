#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
//#include <bits/stdc++.h>
#include <map>
using namespace std;

vector<int> findMissingAndRepeatedValues (vector<vector<int> > & grid) {
        vector<int> ans ;
        unordered_map<int,int>mp;
        int m  =grid.size();
        int first_duplicate=0;
        int first_missing  =0 ;
        for(int i =0 ; i<m ; i++){
            for(int j =0 ; j<m ; j++){
                if(mp.find(grid[i][j])==mp.end()){
                    mp[grid[i][j]]=1;
                }
                else{
                    first_duplicate =grid[i][j];
                  break;
                }
            }
        }
       
        for(int i =0 ; i<m ; i++){
            for(int j =0 ; j<m ; j++){
                if(mp.find(grid[i][j])==mp.end()){
                    mp[grid[i][j]]=1;
                }
               
                
            }
        }
        for(int i=1; i<=m*m ; i++){
            if(mp.find(i)==mp.end()){
                first_missing =i;
                break;
            }
        }
        
        ans.push_back(first_duplicate);
        ans.push_back(first_missing);
        return ans;
    }

int main()
{
    //vector<vector<int>>grid={{9,1,7},{8,9,2},{3,4,6}};
    //vector<int>ans=repeatingmising(grid);

    int n;
    cout << "Enter the size of the grid (n x n): ";
    cin >> n;

    vector<vector<int> > grid(n, vector<int>(n));
    cout << "Enter the elements of the grid (row by row):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

vector<int>ans=findMissingAndRepeatedValues (grid);


    cout << ans[0]<<" ,"<<ans[1]<<endl;

}