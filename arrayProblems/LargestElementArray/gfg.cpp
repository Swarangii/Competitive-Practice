#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int largest(vector<int> &arr) {
        // code here
        int large = arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]>large) large = arr[i];
        }
        return large;
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

    int arr = largest(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}