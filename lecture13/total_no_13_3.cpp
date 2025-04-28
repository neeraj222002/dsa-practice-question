#include<iostream>
using namespace std;

int FirstOccurence(int arr[],int size,int key){
    int s=0;
    int e=size -1;
    int ans =-1;
    int mid= s+ (e-s)/2;

    while(s<=e){

    if(arr[mid]==key){
        ans =mid;
        e=mid-1;
    }
    else if(key<arr[mid]){//left me jao
        e= mid-1;
    }
    else{//right me jao
        s=mid+1;
    }
    mid= s+ (e-s)/2;
    
    }
    return ans;
}

int lastOccurence(int arr[],int size,int key){
    int s=0;
    int e=size -1;
    int ans =-1;
    int mid= s+ (e-s)/2;

    while(s<=e){

    if(arr[mid]==key){
        ans =mid;
        s=mid+1;// so that the start will be mid and it will continue till last
    }
    else if(key<arr[mid]){//left me jao
        e= mid-1;
    }
    else {//right me jao
        s=mid+1;
    }
    mid= s+ (e-s)/2;
    
    }
    return ans;
}


int main(){
    int even[20] = {0,1,2,2,4,4,4,5,5,5,6,9,23};
    // int ans = FirstOccurence(even,8,5);
    int occurance =lastOccurence(even,20,5) -FirstOccurence(even,20,5) + 1;
    cout<<"Total number of occurance in an array :"<< occurance;

    return 0;
}