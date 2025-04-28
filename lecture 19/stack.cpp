#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("Neeraj");
    s.push("gupta");
    s.push("last writen");

    cout<<"Top element of the stack : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of the stack : "<<s.top()<<endl;
    cout<<"Size of the stack "<<s.size()<<endl;
    cout<<"Stack is empty or not : "<<s.empty();

    return 0;
    

}