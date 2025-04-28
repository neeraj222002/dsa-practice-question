#include<iostream>
#include<vector>
 
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    cout<<"total no. of element in the vector = Capacity "<<v.capacity()<<endl;

    
    cout<<"Size of the array "<<v.size()<<endl;
    cout<<"Elemnet at 2 nd index"<<v.at(2)<<endl;

    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;

    cout<<"berfore pop element "<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    cout <<"After pop"<<endl;
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    vector<int> a(5,1);
    cout<<"Print a "<<endl;

    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"To copy a vector "<<"a"<< "into a new vector"<<endl;

    vector<int> last(a);
    for(int i: last){
        cout<<i<<" ";
    }
    cout <<endl;

    return 0;
}