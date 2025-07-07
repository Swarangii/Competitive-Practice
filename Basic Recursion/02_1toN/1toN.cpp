#include <iostream>
#include <vector>
using namespace std;

// Print Number from 1 to N without Loop 

// Recursion --

void linearly(int i, int n){
    if (i>n) return;
    cout<<i<<" ";
    linearly(i+1,n);
}

vector<int> printNos(int x) {
    linearly(1,x);
    return {};
}


int main() {
	int n;
	cin>>n;
  printNos(n);
}