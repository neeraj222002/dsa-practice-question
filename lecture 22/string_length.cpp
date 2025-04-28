#include<iostream>
using namespace std;

int getLength(char name[]){
    int i=0;
    int count= 0;
    while(name[i]!='\0'){
        i++;
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout <<"enter your name : ";
    cin>>name;
    cout<<"your name is :"<<name;
    cout<<" Length of your name is : "<<getLength(name);
    return 0;
}