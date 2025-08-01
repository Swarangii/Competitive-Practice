#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        int temp = arr[n-1];
        for(int i = n-1;i>=1;i--){
            arr[i ]=arr[i-1]; 
        }
        arr[0]=temp;
    }

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    rotate(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };

    return 0;
}