#include<iostream>
using namespace std;

void symmetry(int n) {
    // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //stars
          for(int j=1;j<=stars;j++){
              cout<<"* ";
          }
          
          //spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //stars
          for(int j = 1;j<=stars;j++){
              cout<<"* ";
          }
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
}



int main (){
  int n;
  cin>>n;
  symmetry(n);
	return 0;
}