#include <iostream>
using namespace std;


// Asked in Samsung
int calcGCD(int n, int m){
    while (n>0 && m>0){
        if (n>m) n=n%m;
        else m=m%n;
    }
    if (n==0) return m;
    return n;
}
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    calcGCD(n,m);
}