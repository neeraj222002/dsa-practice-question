#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at first  index "<<d.at(1)<<endl;
    cout<<"Element at front  index "<<d.front()<<endl;
     cout<<"Element at last  index "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl; 
}

