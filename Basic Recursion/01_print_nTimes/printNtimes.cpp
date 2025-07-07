#include <iostream>
#include <vector>
using namespace std;

void printName(int i, int n){
		if (i>n) return;
		cout<<"Coding Ninjas ";
		printName(i+1,n);
	}

vector<string> printNTimes(int n) {
	printName(1,n);
	return {};
}


int main() {
	int n;
	cin>>n;
  printNTimes(n);
}