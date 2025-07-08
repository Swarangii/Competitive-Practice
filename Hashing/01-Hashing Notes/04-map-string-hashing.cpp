#include <iostream>
#include <map>
using namespace std;

// Hashing with map in string
int main(){
  string s;
  cin>>s;

  // Pre compute
  map<char,int>mpp;
  for(int i=0; i<s.size(); i++){
    mpp[s[i]]++;
  } 
  // Iterate in map
  for(auto it: mpp){
    cout<<it.first<<"->"<<it.second<<endl;
  }

  int q;
  cin>>q;
  while(q--){
    char c;
    cin>>c;

    // fetching
    cout<<mpp[c]<<endl;
  }
  return 0;
}