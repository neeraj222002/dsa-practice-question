#include<iostream>
using namespace std;

bool linearSearch()

int main(){
    int arr[6] = {2,3,4,5,6,8};
    int size =6;
    int key =2
    bool ans= linearSearch(arr,6,key);

    if (ans){
        cout"Present :"<<endl;
    }else{
        cout<<" not present"<<endl;
    }
    return 0;
}