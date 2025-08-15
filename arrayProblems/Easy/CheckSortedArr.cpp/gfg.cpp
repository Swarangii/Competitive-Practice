#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

bool isSorted(vector<int>& arr) {
    for(int i =1;i<arr.size() ;i++){
      if(arr[i]<arr[i-1]){
        return false;
      }
    }
    return true;
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
    int result = isSorted(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << result << endl;
    return 0;
}