#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
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
    int k;
    cin>>k;
    vector<int> result = rotateArray(arr,k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };
    return 0;
}