#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    // base case 
    if(n==0 || n==1)return;

    // solving 1 case
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1); 
}

int main(){
    int arr[6]={3,5,3,2,4,5};
   int size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr,size);
    
    cout<< "Sort array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}