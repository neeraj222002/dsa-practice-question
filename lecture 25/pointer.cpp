#include<iostream>
using namespace std;

int main (){
    int num =5;
    int a = num;
    cout <<"A = "<<a<<endl;
    int *p = &num;
    cout<<"before"<<num<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<"after" <<num<<endl;

    // coping pointer
    int *q  =p;
    cout<<q<< " - "<<p<<endl;
    cout<<*q<< " - "<<*p<<endl;

    // important concpt
    int i=3;
    int *t = &i;

    *t = *t +1;
    cout<<*t<<endl;
    cout<<"before" <<t<<endl;
    t=t+1;
    cout<<"after" <<t<<endl; // this will not change the value of i, it will change the addess  of t

    return 0;

}

