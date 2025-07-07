#include <iostream>
#include <vector>
using namespace std;

bool check(string &s, int left, int right, bool deleted) {
    if (left >= right) return true;

    if (tolower(s[left]) == tolower(s[right])) {
        return check(s, left + 1, right - 1, deleted);
    }

    if (deleted) return false;

    return check(s, left + 1, right, true) || check(s, left, right - 1, true);
}

bool validPalindrome(int n, string &s) {
    return check(s, 0, n - 1, false);  
}

int main() {
	int n;
	cin>>n;
  vector<string> s(n);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    for (int i = 0; i < n; ++i) {
        if (validPalindrome(s[i].length(), s[i])) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}