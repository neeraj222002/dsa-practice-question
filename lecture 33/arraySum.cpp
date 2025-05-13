#include<iostream>
using namespace std;

int  getSum(int *arr,int size){
    // base case 
    if(size==0){
        return 0;
    }
    if(size ==1){
        return arr[0];
    }
    //  recursion call

    int remainingPart = getSum(arr +1,size-1);
    int sum = arr[0]+ remainingPart;
    return sum;
}
int main(){
    int arr[5] = {12,3,5,53,2};
    int size =5;
    int ans = getSum(arr,5);
    cout<<"Sum is :"<< ans<<endl;

    return 0;
}