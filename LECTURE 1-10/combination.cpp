// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
 int factorial(int n){
     int fact=1;
     for(int i=0;i<=n; i++){
         int fact=fact*i;
     }return fact;
 }
 
 int nCr(int n,int r){
     int denominator= factorial(r)*factorial(n-r);
     int numinator= factorial(n);
     int ans= numinator/denominator;
     return ans;
 }
 
 
int main() {
    // Write C++ code here
    int n,r;
    cout<<"enter the value of n & r :";
    cin>>n>>r;
    cout<<"answer"<< nCr(n,r);
    

    return 0;
}


enter the value of n & r :4
5
answer1
