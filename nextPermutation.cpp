#include <iostream>
#include <vector>
using namespace std;

//brute force approach

//error in line 43, main print
void swap(int *p,int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void nextPermutation(vector<int>&A) {
    int pivot=-1;
    int n =A.size();
    //running a backward loop from last second element
    for(int i=n-2;i>0;i--) {
        if(A[i]>A[i-1]){
            
            pivot = i; // pivot =i; 
            break;
        } 
    }
  

    for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(&A[i],&A[pivot]);
            break;
        }
    }

    //reverse elements from piv to n-1
    int i=pivot+1, j=n-1;
    while(i<=j) {
        swap(&A[i],&A[j]);
        i++;
    }


}

int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    nextPermutation(v);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}