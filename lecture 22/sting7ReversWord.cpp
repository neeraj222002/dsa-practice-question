#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void reverseWords(std::vector<char>& s) {
        // Helper function to reverse a section of the array
        auto reverse_section = [](vector<char>& s, int left, int right) {
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        };

        // Step 1: Reverse the entire character array
        reverse_section(s, 0, s.size() - 1);

        // Step 2: Reverse each word in the reversed array
        int start = 0;
        for (int i = 0; i <= s.size(); ++i) {
            if (i == s.size() || s[i] == ' ') {
                reverse_section(s, start, i - 1);
                start = i + 1;
            }
        }
    }
};

 
int main() {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o',' ','m','y',' ','n','a','m','e',' ','i','s',' ','j','o','h','n'};
    solution.reverseWords(s);
    for (char c : s) {
        std::cout << c;
    }
    return 0;
}
