#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    int sum =0;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[6] = {1,2,3,4,5};

    cout<<getSum(arr+2,5)<<endl;;

    return 0 ;

}