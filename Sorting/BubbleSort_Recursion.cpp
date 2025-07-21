#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

void bubbleSort(vector<int>& arr, int n) 
{
    //With recursion --

    // Base Condition : range = 1
    if(n==1) return;
    int didSwap =0;
    for(int i = 0; i<=n-2; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            didSwap=1;
        }
    }
    if(didSwap==0)return;
    bubbleSort(arr,n-1);
    
}

int main() {
    vector<int> myVector = {38, 27, 43, 3, 9, 82, 10};
    int n = myVector.size();
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl; 
    bubbleSort(myVector, n);
    // Print the vector after sorting.
    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl; 
    return 0;
}
