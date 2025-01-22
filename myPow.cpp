#include<iostream>
using namespace std;

//lest take 3^5 here we write 5 in binary which is 101
//here x =3,n=5

int myPow(double x,int n) {
    //edge cases
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2 ==0) return 1.0;

    long binForm =n;//if power is neagtive 
    if(n<0) {
        x=1/x;
        binForm=-binForm;
    }
    
    double ans =1;

    while (binForm>0)
    {
       if(binForm%2==1) {//to check if binary form has 0 or 1 in ending
        ans =ans*x;       //if binary form has 1 , we need to multiply ans with x
                        // and also return x^2 so that we need not calculate again if we get 1 in later iterations of bin form

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
