#include<iostream>
using namespace std;

//worked on online gdb

int myPow(double x,int n) {
    //edge cases
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2 ==0) return 1.0;

    long binForm =n;
    if(n<0) {
        x=1/x;
        binForm=-binForm;
    }
    
    double ans =1;

    while (binForm>0)
    {
       if(binForm%2==1) {
        ans =ans*x;

       }
       x=x*x;
       binForm/=2;

    }
    return ans;
    
}

int main()
{

 double x =3;
 int n =5;

 cout << myPow(x,n);

return 0;
}