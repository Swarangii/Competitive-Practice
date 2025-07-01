#include<iostream>
using namespace std;

void symmetry(int n) {
    int iniS=0;
    // Upper Loop--
    for(int i = 0;i<n;i++){
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        // space
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        iniS+=4;
        cout<<endl;
    }
    // Lower Loop--
    iniS=4*n-4;
    for(int i=1;i<=n;i++){
        // star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        // space
        for(int j=0;j<iniS;j++){
            cout<<" ";
        }
        // star
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        iniS-=4;
        cout<<endl;
    }
}



int main (){
  int n;
  cin>>n;
  symmetry(n);
	return 0;
}