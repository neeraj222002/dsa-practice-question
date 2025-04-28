#include<iostream>
using namespace std;

int get_pivot(int arr[],int size){
    int s=0;
    int e= size -1;
    int mid = s+ (e-s)/2;
    while (s<e)
    {
        if(arr[mid]>arr[mid-1]){
            s=mid+1;
        }
        else{
            e =mid;
        }
        mid= s+ (e-s)/2;
    }
    return s;
}


int  binary_search(int arr[],int size,int key){
    int s=0;
    int e= size -1;
    int mid = s+ (e-s)/2;

    while (s<e)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]< key){
            s=mid +1;            
        }
        else{
            e=mid -1;
        }
        mid =s+(e-s)/2;
    }
    return -1;
    
}

int main(){
    int even[10]={7,9,1,2,3};
    int pivot = get_pivot(even,8);
    int n=even.size();
    int k=2;
    if((k>=even[pivot]) && (k<=even[n-1])){
        return binary_search(even,pivot,n-1,k);//binary search on second

    }else{
        return binary_search(even,8,pivot,k);
    }
    
}
