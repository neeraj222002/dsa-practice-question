#include<iostream>
using namespace std;
#include <cstring>
bool checkPalandrome(char a[],int n){
    int s=0;
    int e= n-1;

    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }else{s++;
        e--;}
        
    }return 1;

}
int main(){
    char a[20];
    cout<<"Enter sting : ";
    cin>>a;
    int n = strlen(a);
    cout <<n<<endl;
    cout<<checkPalandrome(a,n)<<endl;
    if(checkPalandrome(a,n)== 1){
        cout<<"It is palandrome ";
    }else{
        cout<<"Not palandrome ";
    }
    return 0;



} 