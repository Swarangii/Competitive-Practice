#include<iostream>
using namespace std;

int countDigits(int n){
	int cnt = 0;
	while(n>0){
		int lastdigit = n%10;
		cnt = cnt+1;
		n=n/10;
	}
	return cnt;	
}
int main(){
    int n;
    cin>>n;
    countDigits(n);
    return 0;
}