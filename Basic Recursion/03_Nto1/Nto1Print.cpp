#include <iostream>
#include <vector>
using namespace std;

// Print Number from 1 to N without Loop 

// Recursion --

void reverseNum(int i, int n){
    // Base condition 
    if(i<1) return;

    // Logic
    cout<<i<<" ";

    // Recursive call
    reverseNum(i-1,n);
}
vector<int> printNos(int x) {
    // Write Your Code Here
    reverseNum(x,x);
    return {};
}

int main() {
	int n;
	cin>>n;
  printNos(n);
}