#include <iostream>
#include <vector>
using namespace std;

//code error
void swap(int *p,int*q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void selectionsort(int array[],int n) {

    for(int i=0;i<n-1;i++)
    {
        int smallestIndex =i; //unsorted part start
        for(int j=i+1;j<n;j++){
            if(array[j]<array[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(&array[i],&array[smallestIndex]);
    }

   
}

void printArray(int arr[] ,int n) {
   for(int i=0;i<n;i++){
    cout <<arr[i]<<" ";
   }
   cout << endl;

}

int main() {
int n =5;
int array[]={4,1,5,2,3};
selectionsort(array,n);
printArray(array,n);

return 0;
}

