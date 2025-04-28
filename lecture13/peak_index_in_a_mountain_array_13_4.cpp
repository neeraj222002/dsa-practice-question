#include<iostream>
using namespace std;
int peak_element (int arr[],int size){
    int s=0;
    int e= size -1;
    int mid = s+ (e-s)/2;

    while (s<e)
    {
        if(arr[mid]<arr[mid+1]){
            s= mid +1;
        }
        else {
            e = mid;
        }
        mid = s+ (e-s)/2;   
    }
    return arr[s];
    
}
int main(){
    int even[10]={3,4,5,4,1};
    int mountain =peak_element(even, 10);
    cout<<"Peak element is :"<<mountain<<endl;
    return 0;
}