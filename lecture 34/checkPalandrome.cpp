#include<iostream>
using namespace std;

bool checkPalandrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return checkPalandrome(str,i+1,j-1);
    }
}
int main(){
    string str = "sbbbrebbs";
    bool isPalandrome = checkPalandrome(str,0,str.length()-1);

    if(isPalandrome){
        cout<<"it is a Palandrome"<<endl;
    }else{
        cout<<"not palandrome"<<endl;
    }
    return 0;
}