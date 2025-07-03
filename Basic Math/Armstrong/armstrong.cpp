#include<iostream>
using namespace std;

bool checkArmstrong(int n){
	int dup = n;
    int digits = 0;
    int sum = 0;

    // Count number of digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of each digit raised to power of digits
    while (dup > 0) {
        int lastdigit = dup % 10;
        sum += pow(lastdigit, digits); // use correct power
        dup /= 10;
    }

    return sum == n;
}
int main() {
	int n;
	cin>>n;
	checkArmstrong(n);
}