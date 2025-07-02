#include<iostream>
using namespace std;

int countDigits(int n){
	int cnt = int(log10(n)+1);
	return cnt;	
}
int main(){
    int n;
    cin>>n;
    countDigits(n);
    return 0;
}