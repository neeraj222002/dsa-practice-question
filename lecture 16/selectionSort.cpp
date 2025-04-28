#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int n=8;
    int arr[n] ={3,2,4,8,5,6,4};
 
    for (int i=0;i<n-1;i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if (arr[i]< arr[minIndex]){
            minIndex =j;}
            swap(arr[minIndex],arr[i]);
        }
         
    } 
    return 0;
}
 