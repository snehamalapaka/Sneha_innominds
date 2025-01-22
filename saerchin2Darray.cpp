#include <iostream>
#include <vector>
using namespace std;

//to search target element in 2D array using binary search algorithm
//given elements are arranged in non decreasing order

bool searchInRow(vector<vector<int>>&mat, int target ,int row) {
    //n rows m colums 
    //function to find the element in particular row after finding in which row target exists
    int n =mat[0].size();
    int st =0, end=n-1;

    //binary search with in row
    while(st<=end) {
        int mid=st + (end-st)/2;
        if(target==mat[row][mid]){
            return true;//target here is in mid itself
        }else if (target>mat[row][mid]){ //target greater than mid so go to right half
            st = mid+1;

        }else {
            end=mid-1; //target less tham mid so search in left half
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
            //search in next row / bottom row as target is larger than last element of middle row
        }else if (target >= mat[midRow][n-1]) {
            StartRow=midRow+1;
        }else { //search element is upper row as target is less than first elment of middle row
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
