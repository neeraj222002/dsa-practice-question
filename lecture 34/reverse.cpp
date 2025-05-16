#include<iostream>
using namespace std;

string reverse(string str, int i, int j){
    // base case
    if(i>=j){
        return str;
    }
    swap(str[i],str[j]);
    i++;j--;
    return reverse(str,i,j);

}

int main(){
string str = "aerba";
string ans =reverse(str,0,str.length()-1);
cout<<ans;
return 0;
}