#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

vector<int> removeDuplicates(vector<int> &arr) {
  // Using vector
  int i=0;
  int n = arr.size();
  for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  vector<int> result(arr.begin(), arr.begin() + i + 1);
  return result;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> result = removeDuplicates(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}