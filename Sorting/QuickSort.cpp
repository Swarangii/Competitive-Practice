#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]); // Put pivot in correct position
    return j;
}

void qs(vector<int> &arr, int low , int high ){
    if(low<high){
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    qs(arr,0,arr.size()-1);
    return arr;
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

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}