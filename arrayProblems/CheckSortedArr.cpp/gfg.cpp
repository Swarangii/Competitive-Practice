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
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int result = isSorted(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "The Second largest element is: " << result << endl;
    cout << "\n";
    return 0;
}