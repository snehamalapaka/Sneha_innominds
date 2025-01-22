#include <iostream>
#include <vector>
using namespace std;

//bubble sort- to sort array in ascending order
//outer loop runs n-1 iterations where n is size of array
//outer loop i , inner loop j (inner loop runs n-1-i ) times


void bubblesort(int array[],int n) {

    bool isSwap = false;

   for(int i=0;i<n-1;i++) {
    for(int j=0;j<n-i-1;j++)
    {
        if(array[j+1]<array[j])
        {
            swap(array[j],array[j+1]);
            isSwap = true;
        }
    }
    if(!isSwap) {  //array is alr sorted
        return ;
    }
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
bubblesort(array,n);
printArray(array,n);

return 0;
}

