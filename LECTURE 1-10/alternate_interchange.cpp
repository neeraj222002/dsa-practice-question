// Online C++ compiler to run C++ program online
// this {1,5,6,4,3,9,2,87} to
// this {5 1 4 6 9 3 87 2} 
#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
// int swapArray(int arr[],int size){         // changing using for loop
//         for(int i=0;i<size;i+=2){
//             if (i<size){
//                 swap(arr[i],arr[i+1]);}}}

int swapArray(int arr[],int size){          // changing using while loop
    int i=0;
    while(i<size){
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
}
int main() {
    cout <<"Alternative interchange"<<endl;   //topic 
    int odd[10]={1,5,6,4,3,9,2};                // odd array created
    int even[10]={1,5,6,4,3,9,2,87};            // even array created
    
    swapArray(even,10);                         // calling swap funtion
    print(even,10);                                 // calling print funtion

    swapArray(odd,10);
    print(odd,10);
    return 0;
}


