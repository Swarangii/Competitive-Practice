#include <iostream>
#include <vector>
using namespace std;

// Print Number from 1 to N without Loop 

// Recursion --

void recursiveReverseHelper(vector<int> &arr, int start, int end) {
    // Base Case: If the start index crosses or meets the end index
    if (start >= end) {
        return;
    }
    // Recursive Step:
    // 1. Swap the elements at the start and end positions
    swap(arr[start], arr[end]);

    // 2. Recursively call the helper for the inner part of the vector
    recursiveReverseHelper(arr, start + 1, end - 1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
   vector<int> reversedNums = nums;

    // Call the recursive helper function on the copy
    if (!reversedNums.empty()) {
        recursiveReverseHelper(reversedNums, 0, reversedNums.size() - 1);
    }

    // Return the now-reversed copy
    return reversedNums;
}

int main() {
	int n;
	cin>>n;
  vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    vector<int> reversed = reverseArray(n, nums);
}