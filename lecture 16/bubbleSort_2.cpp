#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=6;
    int arr[n]={10,1,7,6,14,9};

     for(int i=1; i<n ;i++){
        for(int j=0; j<n ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]); }
            }
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

return 0;
}
