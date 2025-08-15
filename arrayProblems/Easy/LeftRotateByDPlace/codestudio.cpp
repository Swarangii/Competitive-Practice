#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    k=k%n;
    int temp[k];
    for(int i =0;i<k;i++){
        temp[i]=arr[i];
    }

    for(int i =k;i<n;i++){
        arr[i-k]=arr[i];
    }

    for(int i =n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }

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