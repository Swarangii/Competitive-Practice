#include<iostream>
using namespace std;


int reverse(int x) {;
	long long revNum = 0;
	while(x!=0){
		int lastdigit = x%10;
		revNum = ((revNum*10)+lastdigit);
        if (revNum > 2147483647 || revNum < -2147483648) {
             return 0; 
            }
		x=x/10;
	}
	return revNum;
    }
int main() {
	int n;
	cin>>n;
	reverse(n);
}