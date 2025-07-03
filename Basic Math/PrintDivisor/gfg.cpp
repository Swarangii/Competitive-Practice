#include<iostream>
#include<vector>
using namespace std;


// Code Studio , GFG , Leetcode 

void print_divisors(int n) {
        // Code here.
        vector<int> smallDivisors;
        vector<int> largeDivisors;

        for (int i = 1; i <= sqrt(n); ++i) {
            if (n % i == 0) {
                smallDivisors.push_back(i);
                if (i != n / i) {
                    largeDivisors.push_back(n / i);
            }
        }
    }
        for (int val : smallDivisors)
            cout << val << " ";
            reverse(largeDivisors.begin(), largeDivisors.end());
        for (int val : largeDivisors)
            cout << val << " ";

}
int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    print_divisors(n);
    return 0;
}