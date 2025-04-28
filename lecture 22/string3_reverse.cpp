#include<iostream>
using namespace std;

void Reverse(char name[],int n){
    int s=0;
    int e= n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int i=0;
    int count= 0;
    while(name[i]!='\0'){
        i++,count++;}
    return count;
    }

int main(){
    char name[20];
    cout <<"enter your name : ";
    cin>>name;
    cout<<"your name is :"<<name<<endl;
    int n =getLength(name);
    cout<<"Length of your name is : "<<n<<endl;
    Reverse(name,n);
    cout<<"Reverse name is :"<<name<< endl;
    return 0;
}