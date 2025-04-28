#include<iostream>
#include<vector>
using namespace std;

void mergZero(vector<int> & nums){
    int i=0;
    for(int j=0; j<nums.size(); j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;}
    }
}

int main(){
     int arr[5]= {0,1,0,3,12};
    mergZero(arr);

    return 0;

}