#include<iostream>
#include<vector>
#include<string>
using namespace std;

char getMaxChar(string s){
    int arr[26]= {0};

    // create an array of count of characters
    for(int i=0; i<=s.length() ;i++){
        char ch =s[i];
        int number= 0 ;
        number = ch- 'a';
        arr[number]++;
    }
    //  finding maximum occureing character
    int max= -1, ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans = i;
            max=arr[i];
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;

}

int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    cout<<"THE MAXIMUM OCCURING CHARACTER IS : "<<getMaxChar(s)<<endl;
    return 0 ;
 }


