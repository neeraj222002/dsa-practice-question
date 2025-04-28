#include<iostream>
#include<vector>
#include<array>
using namespace std;

bool ispossible(vector<int>&stalls,int k, int mid){
    int cowCount =1;
    int lastPos =stalls[0];

    for(int i=0;i,stalls.size();i++){
        if(stalls.size() -lastPos>= mid){
            cowCount++;
            if(cowCount ==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int agressiveCow(vector<int>&stalls ,int k){
    sort(stalls.begin(),stalls.end());
    int s =0;
    int maxi =-1;
    for(int i=0; i<stalls.size();i++){
        maxi =max(maxi,stalls[i]);
    }

    int e= maxi;
    int ans =-1;
    int mid =s+ (e-s)/2;

    while(s<=e){
        if(ispossible(stalls,k,mid)){
            ans =mid;
            s=mid +1;
        }
        else{
            e= mid-1;
        }
        mid =s+ (e-s)/2;
    }
    return ans;

}
int main(){
    int stalls[10] ={4,2,1,3,6};
    int k=2;
    cout<<agressiveCow(stalls,k);
    return 0;

}