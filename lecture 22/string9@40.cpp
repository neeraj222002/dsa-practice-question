#include<iostream>
#include<string>
using namespace std;

string replacespc(string &s){
    string temp = "";
    for(int i=0; i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
    }return temp;
}

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    // for(int i=0; i<s.length();i++){
        cout<<"answer is : " <<replacespc(s)<<endl;
    // };  
 return 0;
}