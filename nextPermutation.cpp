#include <iostream>
#include <vector>
using namespace std;

//brute force approach

// next permutation of cab is --> cba
//similarly lets do same for our numbers in array
void swap(int *p,int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void nextPermutation(vector<int>&A) {
    int pivot=-1;//pivot is the element from back which is less that its prev val from back
    int n =A.size();
    //running a backward loop from last second element
    for(int i=n-2;i>0;i--) {
        if(A[i]>A[i-1]){
            
            pivot = i; // pivot =i; 
            break;
        } 
    }
  

    for(int i=n-1;i>pivot;i--){ //we swap pivot with smallest element from back to pivot
        if(A[i]>A[pivot]){
            swap(&A[i],&A[pivot]);
            break;
        }
    }

    //reverse elements from piv to n-1 as they are in decreasing order ,reversing keeps them in increasing order
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
