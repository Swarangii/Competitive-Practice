#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        if(n<2) return -1;
        int large = arr[0] ;
        int slarge = -1;
        for(int i =0;i<n;i++){
            if(arr[i]>large){
                slarge=large;
                large=arr[i];
            }
            else if(arr[i]!=large && arr[i]>slarge){
                slarge = arr[i];
            }
        }
        if(slarge==INT_MIN) return -1;
        return slarge;
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
    int result = getSecondLargest(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "The Second largest element is: " << result << endl;
    cout << "\n";
    return 0;
}