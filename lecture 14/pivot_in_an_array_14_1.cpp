// #include<iostream>
// using namespace std;
// int get_pivot(int arr[],int size){
//     int s=0;
//     int e= size -1;
//     int mid = s+ (e-s)/2;

//     while (s<e)
//     {
//         if(arr[mid]>arr[mid-1]){
//             s=mid+1;
//         }
//         else{
//             e =mid;
//         }f
//         mid= s+ (e-s)/2;
//     }
//     return s;
    
// }
// int main(){
//     int size =10;
//     int even[size]={7,9,1,2,3};
//     cout<<"Pivot is "<<get_pivot(even,size);
//     return 0;
// }




#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int s=0;int e=size-1;
    int mid =s+ (e-s)/2;

    while(s<e){
        if (arr[mid]>arr[mid-1])
        {
            s=mid+1;
        }
        else{
            e= mid;
        }
        mid =s +(e-s)/2;
        
    }return s;
}

int main(){
    int size=10;
    int even[size]={7,9,1,2,3,};
    pivot(even,size);
    cout<< pivot;

}