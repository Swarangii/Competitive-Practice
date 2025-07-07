#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
         int left = 0, right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // Try skipping either the left or right character
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }

        return true;
    }

int main() {
	string n;
	cin>>n;
  validPalindrome(n);
  return 0;
}