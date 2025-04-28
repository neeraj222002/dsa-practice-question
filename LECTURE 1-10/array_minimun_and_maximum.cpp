// printing maximum and minimum number

#include <iostream>
#include<climits>
using namespace std;

int getMax(int num[],int n){
    int max=INT_MIN;;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}


int main() {
    // Write C++ code here
    int  size; // size of the array
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    // int num[100];   // static memory allocation
    int *num = new int [size];   // dynamic memory allocation

    for(int i=0;i<size;i++){
        cin>>num[i];}
        
    cout<<"the maximum element is :"<<getMax(num,size)<<endl;
    cout<<"The minimum element is :"<<getMin(num,size);
    delete []num;
    num = nullptr;
    return 0;

}

// enter the size of the array:
// 5
// 2
// 4
// 6
// 1
// 0
// the maximum element is :6
// The minimum element is :0

// 2 method

//  #include <iostream>
//  #include<climits>
// using namespace std;

// int getMax(int num[],int n){
//     int maxi=INT_MIN;;
//     for(int i=0;i<n;i++){
        
//         maxi=max(num[i],maxi);
//         // if(num[i]>max){
//         //     max=num[i];
//         // }
//     }
//     return maxi;
// }

// int getMin(int num[],int n){
//     int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         mini=min(num[i],mini);
//         // if(num[i]<min){
//         //     min=num[i];
//         // }
//     }
//     return mini;
// }


// int main() {
//     // Write C++ code here
//     int  size;
//     cout<<"enter the size of the array:"<<endl;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     } 
//     cout<<"the maximum element is :"<<getMax(num,size)<<endl;
//     cout<<"The minimum element is :"<<getMin(num,size);

//     return 0;
// }

// enter the size of the array:
// 6
// 8
// 7
// 9
// 9
// 88
// 5
// the maximum element is :88
// The minimum element is :5