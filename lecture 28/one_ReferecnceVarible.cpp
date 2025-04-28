// #include<iostream>
// using namespace std;
// void update1(int p){
//     p++;
// }

// void update2(int & p){
//     p++;
// }
// int main(){
//     // int i=5;
//     // int &j = i; // reference variable
//     // cout<<i<<endl;
//     // i++;
//     // cout<<i<<endl;
//     // j++;
//     // cout<<i<<endl;

//     int n=5;
//     cout<<"Beforeupdate : "<<n<<endl;
//     update2(n); // pass by value
//     cout<<n<<endl;
//     cout<<"After update : "<<n<<endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;

int getSum(int  *arr, int n){
    int sum =0;
    for(int i=0 ; i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main (){
    int n ;
    cout<<"Enter t5he size of array : "<<endl;
    cin >>n;
    // varible size arrary
    int *arr =new int[n];

    // taking input in array
    for(int i=0;i<n;i++){
        cout<<"Enter the element" <<i+1<<endl;
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<< "Anser is :"<<ans<<endl;
    return 0;
    // delete []arr; // free the memory

}