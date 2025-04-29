#include<iostream>
#include<climits>
using namespace std;

// searching in a linear array by a key, using boolian  data type

bool search(int array[],int size,int key){          
    for(int i=0;i<=size;i++){
        if(array[i]==key){
        return 1;}
    }
    return 0;
}

int main(){ 
    
    int array[10]={12,4,5,6,3,78,7,-3,-7};
    int key;
    cout<<"enter the key to be searched :"<<endl;
    cin>>key;
    bool found=search(array,10,key);
    
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is not present";
    }
     return 0;
}


