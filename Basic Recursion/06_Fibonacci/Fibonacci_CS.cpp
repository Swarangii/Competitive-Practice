#include <iostream>
#include <vector>
using namespace std;

// Print Fibonacci Number 

int fib(int n,vector<int> &dp){
    if (n<=1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> result;
    vector<int> dp(n + 1, -1);
    for (int i =0;i<n;i++){
        result.push_back(fib(i,dp));
    }
    return result;
}

int main() {
	int n;
	cin>>n;
  generateFibonacciNumbers(n);
}