#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int removeDuplicates(vector<int>& nums) {
  int i=0;
  for(int j=1;j<nums.size();j++){
    if(nums[i]!=nums[j]){
      nums[i+1]=nums[j];
      i++;
    }
  }
  return i+1;
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
    int result = removeDuplicates(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << result << endl;
    return 0;
}