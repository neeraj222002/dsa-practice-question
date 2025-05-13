#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){
    // base case
    if(size==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool RemainingPart = isSorted(arr +1, size -1);
        return RemainingPart;
    }

}


int main(){
    int arr[6] = {3,5,2,65,8,3};
    int size = 6;

    bool ans = isSorted(arr,5);
    if(ans){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not sorted"<<endl;
    }
    return 0;
}