#include<iostream>
#include<algorithm>
using namespace std;
//   int binary_search(int array, int size){

//     int start=0;
//     cin>>"enter the size of array">>size>>endl;
//     int arr[size];
//     for (int i =0;i<=size;i++){
//     cout<<"enter the element in the array"<<endl;
//     cin>>arr[i];
    
//     }

//     // arr[]= sort(arr[0],sizeof(arr));

//     int 
//     int end=sizeof(arr);
     
//     int mid =start +(ends start)/2;
    
//     while(start<=end){
//         if (arr[mid]==key){
//             return cout<<mid;
//         }

//         else if (arr[mid]<key){
//             end= mid -1;
//         }
//         else (arr[mid]>key){
//             start =mid +1;
//         }

//         mid =stat +(end-start)/2;
//     }return -1;
//  }
int main(){

    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[size];

    for (int i=0;i<size;i++){
        cout<<"enter the "<< i <<" element :"<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){

    cout<<i<< " element : "<<arr[i]<<endl;
    }
    
    int sortedArray[] = arr.sort();
     
    for( int i=0;i<size;i++){

    cout<<i<< " element : "<<sortedArray[i]<<endl;
    }
    // binarySearch(sortedArray,size);
    return 0;
}