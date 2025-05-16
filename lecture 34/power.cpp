#include<iostream>
#include<cmath>  // to include power function
using namespace std;
int Power(int a,int b){
    if(b==0)return 0;
    if(b==1)return a;
    int ans = pow(a,b/2);
    if(b%2==0){
        return ans *ans;
    }else{
        return ans*ans*a;
    }
}
int main(){
    int a,b;
    cout<<"Enter A :"<< endl;
    cin>>a;
    cout<<"Enter B : "<<endl;
    cin>> b;
    int ans= Power(a,b);
    cout<<ans<<endl;
    return 0;
}