#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;
    l.push_back(5);
    l.push_back(1);
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase element "<<endl;
    
    for(int i:l){
        cout<<i<<" ";}
    
    cout<<endl;

    cout<<"List size "<<l.size();
    
    
    return 0;}