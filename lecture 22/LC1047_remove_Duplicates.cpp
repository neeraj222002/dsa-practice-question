#include<iostream>
using namespace std;
#include<string>

class Solution {
    public:
     string removeDuplicates(const string& S) {
       string ans;
   
       for (const char c : S)
         if (!ans.empty() && ans.back() == c)
           ans.pop_back();
         else
           ans.push_back(c);
   
       return ans;
     }
   };

   int main(){
    string sting;
    cout << "Enter the string : "<< endl; 
    cin>>sting;
    Solution s;
    cout<<s.removeDuplicates(sting)<<endl;

    return 0;
   }