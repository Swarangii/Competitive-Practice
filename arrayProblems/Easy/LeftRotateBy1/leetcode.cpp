#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

void Reverse(vector<int>&arr,int start,int end){  
  while(start < end)
    {
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        Reverse(nums,0,n-1);
        Reverse(nums,0,k-1);
        Reverse(nums,k,n-1);
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
    int a;
    cin>>a;
    Reverse(arr,k,a);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << Reverse << endl;
    return 0;
}