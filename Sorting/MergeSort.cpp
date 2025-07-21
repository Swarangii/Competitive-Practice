#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;


void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

void mS(vector <int> &arr,int low,int high){
    if (low==high) return;
    int mid = (low+high)/2;
    mS(arr , low , mid);
    mS(arr,mid+1, high);
    merge(arr, low, mid, high);
}

void mergeSort(vector < int > & arr, int n) {
    mS(arr,0,n-1);
}


int main() {
    vector<int> myVector = {38, 27, 43, 3, 9, 82, 10};
    int n = myVector.size();
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl; 
    mergeSort(myVector, n);
    // Print the vector after sorting.
    cout << "Sorted array:   ";
    for (int i = 0; i < n; i++) {
        cout << myVector[i] << " ";
    }
    cout << endl; 
    return 0;
}
