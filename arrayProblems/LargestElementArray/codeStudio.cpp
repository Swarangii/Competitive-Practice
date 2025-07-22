#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int largestElement(vector<int> &arr) {
    // Write your code here.
    int largest = arr[0];
     for (int i: arr){
        largest = max(largest, i);
    }
    return largest;
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

    int arr = largestElement(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}