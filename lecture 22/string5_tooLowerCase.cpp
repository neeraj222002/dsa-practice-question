#include<iostream>
using namespace std;

// char toLowerCase(char ch){
//     for(int i=0; ch[i]!='\0';i++){
//         if(ch[i]>='a' && ch[i]<='z'){
//         return ch;
//      }else{
//         char temp = ch[i] -'A'+'a';
//           return temp;
//         }
//     }
// }
int main(){
    char ch[20];
    cout<<"Enter the string : ";
    cin>>ch;
    for (int i=0;ch[i]!='\0';i++){
       
        if(ch[i]>='a'&& ch[i]<='z'){
            cout<<ch[i];
        }else{
            char temp = ch[i]-'A'+'a';
            cout<<temp;
        }    
    }
    // toLowerCase(a);
    // cout<<a<<endl;

    return 0;
}