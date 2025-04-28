  #include<iostream>
 using namespace std;
 int main(){
      int n;
      cout<<"enter the no.";
      cin>>n;
      int i=2;
      while(i<n){
          if(n%i==0){
              cout<<"number is not prime "<<i<<endl;
              
          }
          cout<<"number is prime"<<endl;
          i++;
          }
         
      }

// prime no using function

#include<iostream>
using namespace std;


void isprime(int num){
     for(int i=2;i<=num-1;i++){
         if(num%i==0){
             cout<<num<<"not a prime no:"<<endl;
             }
     }
     cout<<num<<"is a prime number:";
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    isprime(n);
    return 0;
}