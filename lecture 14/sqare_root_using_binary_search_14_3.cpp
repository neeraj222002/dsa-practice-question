#include<iostream>
#include<math.h>
using namespace std;

long long int sqrt(int n){
    int s=0;
    int e=n;
    
long long int mid =s +(e-s)/2;
    int ans =-1;
    while (s<e){
        
long long int square =mid*mid;
        if(square==n){
            return mid;
        }
        else if(square <n){
            ans =mid;
            s=mid+1;
        }
        else{
            e= mid;
        }
        mid= s+(e-s)/2;
    }
    return ans;
    
}

// double more_precise(int n, int presssion, int tempsol){
//     double factor =1;
//     double ans = tempsol;
//     for(int i =0; i<presssion; i++){
//         factor = factor/10;
//         for(int j=ans;j*j<n; j=j+factor){
//             ans =j;
//         }
//     }
// }

int main(){
    int n;
    cout<<" Enter the number :"<<end;
    cin>>n;
    int root= sqrt(n);
    cout<<"square root is :"<<root;

    // int tempsol= sqrt(n);
    // cout<<" Root is : "<<more_precise(3,tempsol);
    return 0;
 }


 