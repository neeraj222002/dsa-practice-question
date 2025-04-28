#include<iostream>
using namespace std;

int main(){
    int n =10;
    int arr[n]={10,1,7,4,8,2,11};
     
     for(int i=1;i<n;i++){
        int temp =arr[i];
        int j= i-1;

        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }arr[j+1] =temp;
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     return 0;
}