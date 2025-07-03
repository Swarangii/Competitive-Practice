#include<iostream>
using namespace std;


// Code Studio , GFG , Leetcode 

int* printDivisors(int n, int &size){
    size = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            size++;
    }
    int* divisors = new int[size];
    int index = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            divisors[index++] = i;
    }

    return divisors;

}

int main(){
    int n;
    cin>>n;
    int s;
    cin>>s;
    printDivisors(n,s);
    return 0;
}