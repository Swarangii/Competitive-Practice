#include<iostream>
using namespace std;


// Code Studio , GFG , Leetcode 

bool palindrome(int n)
{
    int dup = n;
	int revNum = 0;
	while(dup>0){
		int lastdigit = dup%10;
		revNum = ((revNum*10)+lastdigit);
		dup=dup/10;
	}
    if (revNum == n){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    palindrome(n);
    return 0;
}