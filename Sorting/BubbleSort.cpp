#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    for (int i = n-1; i>0; i--){
        for(int j=0; j<i ; j++){
            if(arr[j] >arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            
        }
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
  return 0;
}