#include <iostream>
#include <map>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i=0; i<n; i++){
    cin>>arr[i];
  }
  // Pre compute
  map<int,int>mpp;
  for(int i=0; i<n; i++){
    mpp[arr[i]]++;
  }
  // Iterate in map
  // for(auto it: mpp){
  //   cout<<it.first<<"->"<<it.second<<endl;
  // }

  int q;
  cin>>q;
  while(q--){
    int num;
    cin>>num;

    // fetching
    cout<<mpp[num]<<endl;
  }
  return 0;
}