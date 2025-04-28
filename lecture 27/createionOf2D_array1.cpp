#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;


    // // creating @D array dyanamilcaaly
    // int **arr = new int *[n];
    // for(int i=0;i<n;i++){
    //     arr[i] = new int[n];
    // }

    // // taking input in 2D array

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // // taking output

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }

    // // deletion of heap
    // for(int i=0;i<n;i++){
    //     delete [] arr[i];
    // }

    // delete [] arr;

    int row;
    int col;
    cout<<"Enter the value of row"<<endl;
    cin>>row;
    cout<<"Enter the value of row"<<endl;
    cin>>col;


    // creating 2D array dyanamilcally
    int **arr = new int *[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }



    // taking input in 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
            cout<<"Element no. "<<i+j<<endl;
            cin>>arr[i][j];
        }
    }

    // taking output

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
            cout<<"Element no. "<<i+j<<" :" ;
            cout<<arr[i][j]<<" "<<endl;
        }//cout<<endl;
    }

    // deletion of heap
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete [] arr;

    return 0;
}