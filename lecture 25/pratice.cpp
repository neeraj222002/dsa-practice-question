#include<iostream>
using namespace std;

int main(){

    // int a,b;
    // cout <<" enter the value of a: "<< endl;
    // cin>>a;
    // cout <<" enter the value of b: "<< endl;
    // cin>>b;
    // int *ptrA = &a;
    // int *ptrB  = &b;
    // cout<<" The value of a is : "<<*ptrA<<endl;
    // cout<<" The value of b is : "<<*ptrB<<endl;
    
    // // Error 
    // //   arr = arr+1
    //  int arr[5] = {1,2,3,4,5};
    //  int *ptr =&arr;
    //  ptr = ptr +1;
    //  cout<<*ptr<<endl;  //  Error

int arr[5] ={1,2,3,4,5};
char ch[6]= "abcde"; // string defines '' , char defines in " "
cout<<arr<<endl; // 1st element address
cout<<ch<<endl;


char *c  = &ch[0]; // address of first element of ch
cout<<c<<endl;  // printing all the element of the char array

char temp = 'z';
char *p = &temp;
cout<<p<<endl;  // zabcde

return 0;
}