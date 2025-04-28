#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans =reverse(v);
    cout<<"Printing Reverse Array"<<endl;
    print(ans);

    return 0;

}

vector<int> reverse(vector<int> v){
    int s=0; 
    int e=v.size() -1;
    while(s<=e){
        swap(v[s],v[e]);
        e--;
        s++;
    }
    return v;
}

void print(vector <int> v){
    for(int i=0; i<v.size();i++){
        cout<<v[i];
    }cout<<endl;
}