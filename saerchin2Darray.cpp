#include <iostream>
#include <vector>
using namespace std;

//code worked on online gdb

bool searchInRow(vector<vector<int>>&mat, int target ,int row) {
    //n rows m colums 
    //function to find the element in particular row after finding in which row target exists
    int n =mat[0].size();
    int st =0, end=n-1;

    //binary search in row
    while(st<=end) {
        int mid=st + (end-st)/2;
        if(target==mat[row][mid]){
            return true;
        }else if (target>mat[row][mid]){
            st = mid+1;

        }else {
            end=mid-1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& mat,int target){
    int m =mat.size(), n=mat[0].size();

    int StartRow =0, endRow=m-1;
    while(StartRow<=endRow) {
        int midRow = StartRow +(endRow-StartRow)/2;

        if(target>=mat[midRow][0]&& target<=mat[midRow][n-1]) {
             //found element in mid row
             return searchInRow(mat,target,midRow);
        }else if (target >= mat[midRow][n-1]) {
            StartRow=midRow+1;
        }else {
            endRow=midRow-1;
        }
       

    }
    return false;
}

int main() {
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};

    int target=6;
    int rows=3;
    int cols=3;

   cout<< searchMatrix(matrix,target);

}
