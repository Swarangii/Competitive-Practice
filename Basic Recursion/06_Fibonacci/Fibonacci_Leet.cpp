#include <iostream>
#include <vector>
using namespace std;

// Print Fibonacci Number on Leetcode

int fib(int n) {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }

int main() {
	int n;
	cin>>n;
  fib(n);
}