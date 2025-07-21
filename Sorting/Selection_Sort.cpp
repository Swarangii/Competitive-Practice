#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 0; i<=n-1 ; i++){
        int mini = i;
        for (int j = i+1; j<n ;j++){
            if(arr[j] < arr[mini]){
                mini=j;
            }
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  selectionSort(arr,n);
  return 0;
}