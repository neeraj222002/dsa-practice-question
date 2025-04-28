#include<iostream>
#include<climits>
using namespace std;

// Q6
// printing the array in wave order
int wave_Order(int arr[3][3], int row_size,int col_size){
    for (int col =0; col<col_size; col++){
        if(col&1){ // odd column
            for(int row = row_size -1;row>=0;row--){
                cout<<" "<<arr[row][col];}}
        else{
            for(int row=0; row<row_size; row++){
                cout<<" "<<arr[row][col];}
        }
    // for(int row =0 ;row<row_size ; row++){     
    //     for( int col =0; col< col_size; col++){
            
    //         if( col%2==0){
    //             cout<<" "<<arr[row][col];}
    //         else{
    //             cout<<" "<<arr[row][col];}
    //     }cout<<endl;
    }
}

// Q5
// largest row sum 
int largest_row_sum(int arr[3][3], int row_size, int col_size){
    int maxi = INT_MIN;   // or maxi = -1 // for the negative values
    for(int row =0 ; row<3; row++){
        int sum =0;
        for(int col =0;col <3;col++){
                cout<<" "<< arr[row][col];
                sum +=arr[row][col];
        }cout<< " = "<<sum<<endl;
        maxi = max(sum, maxi);  
    }return maxi;
}

// Q4
// col sum 

int col_sum(int arr[3][3], int row_size, int col_size){
    for (int i=0; i<3;i++){
        int sum =0;
        for(int row=0 ;row< 3;row++){
            cout<<" " <<arr[row][i];
            sum += arr[row][i];
        }cout<< " ="<<sum;
    }
}
// Q3
// searching the element
bool search(int arr[3][3],int row_size, int col_size, int target){
    for (int i=0; i<row_size;i++){
        for(int j =0; j<col_size;j++){
            if(arr[i][j] == target){
                return 1;
            }else{
                return -1;
                }
            }
        }
};


// Q4
// row wise sum
int row_Sum(int arr[3][3], int row_size, int col_size){
    
    for (int i =0; i<row_size;i++){
        int sum = 0;
        for (int j=0;j<col_size;j++){
            cout<<" "<<arr[i][j];
            sum += arr[i][j];
        }cout<<"  "<< " = "<<sum<<endl;
    }
}

int main(){
    int arr[3][3];
    cout<<" Emter the value of 2 D array : "<<endl;
// input
    // for(int i=0; i<3;i++){
    //     for (int j=0;j<3;j++){
    //         // cout<<" Enter the "<<i+j<<" number :"<<endl;1

    //         cin>>arr[i][j];
    //     }
    // }   
    
    // out put
    // for(int i=0; i<3;i++){
    //     for (int j=0;j<3;j++){
    //         // cout<<" Enter the "<<i+j<<" number :"<<endl;1

    //         cout<<" "<<arr[i][j];
    //     }cout<<endl;
    // }


    // output of the predefined array
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // for(int i=0; i<3;i++){
    //     for (int j=0;j<3;j++){
    //         // cout<<" Enter the "<<i+j<<" number :"<<endl;
    //         cout<<" "<<arr1[i][j];
    //     }cout<<endl;
    // }


    // cout<<search(arr1,3,3,5);
    // cout<<endl;

    // row wise sum
    // cout<< row_Sum(arr1,3,3);

    // columne wise sum 
    // col_sum(arr1,3,3);
// cout<<endl;
    // Largest row sum
    // cout<<largest_row_sum(arr1,3,3);

// printing the array in wave order
    cout<<" Wave order is  : ";
    wave_Order(arr1,3,3);
return 0;
}


