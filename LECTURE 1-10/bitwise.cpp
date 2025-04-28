 

// decimal to binary 
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "enter the value of n :";
    cin >> n; // Input the decimal number
    int i = 0; // Position of the binary digit (starting from 0)
    int ans = 0; // To store the binary representation

    while (n != 0) {
        int bit = n & 1; // Extract the last bit (0 or 1) using bitwise AND
        n = n >> 1; // Right shift the number to remove the last bit
        ans = (bit * pow(10, i)) + ans; // Add the bit to the binary number at the correct position
        i++; // Move to the next binary position
    }

    cout << ans; // Output the binary representation
    return 0;
}
// enter the value of n :5
// 101




 

// //binary to decimal
// #include <iostream>
// using namespace std;
// #include<math.h>
// int main() {
//     cout<<"enter the value of n :";
//     int n;
//     cin>>n;
//     int i;
//     int ans=0;
//  while(n!=0){
//      int digit= n%10;
//      if(digit==1){
//       ans = (digit*pow(2,i))+ ans;
//       }
//       n=n/10;
      
//      i++;
    
// }
//  cout<<ans;
//  return 0;
// }


// enter the value of n :00111
// 7