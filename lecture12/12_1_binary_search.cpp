// binary search should be apply n monotonic function(sorted)

    // 
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start +(end -start)/2;
     while (start<=end){
     
    if(arr[mid]==key){
        return mid;
        };
    if(arr[mid]<key){
        start--;

    }
    else{
        start++;
    }

    mid =start +(end -start)/2;



}
   return -1; 
}
int main(){
    int even[8]={2,4,6,8,10,12,14};
    int odd[8]= {1,3,5,7,9,11,13,15};
    int key;
    cin>>key;
    binarySearch(even,8,key);

    cout<<"for even search :"<<endl;



    binarySearch(odd,8,key);
    cout<<"for odd search :"<<endl;
return 0;

}