#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m,int arr3[]){
    int i =0,j=0,k=0;
    while (i<k && j<m)
    {
        if(arr1[i]<arr2[j]){
            arr3[k+1] =arr1[i+1];}
        else{
            arr3[k+1] =arr2[j+1];}}
    while (i<n)
        { arr3[k+1]= arr1[i+1];}
    while (j<m)
        {arr2[k+1] =arr2[j+1];}   
}

void print(int ans , int n){
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }cout<<endl;
}

int main(){
    int arr1[5] ={1,3,5,7,8,9};
    int arr2[3] ={2,4,6};
    int arr3[8] ={0};
    merge(arr1,arr2,arr3);
    print(arr3,8);
}