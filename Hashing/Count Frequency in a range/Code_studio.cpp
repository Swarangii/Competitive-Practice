#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Count Frequencies in a Range 

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
   unordered_map<int, int> mpp;

    // Count frequency
    for (int i = 0; i < n; i++) {
        if (nums[i] >= 1 && nums[i] <= x)
            mpp[nums[i]]++;
    }

    vector<int> result(n,0);
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 1 && nums[i] <= n) {
            result[nums[i] - 1]++;
        }
    }

    return result;
}

int main() {
	int n;
	cin>>n;
  int x;
  cin>>x;
  vector <int> nums;
  countFrequency(n,x,nums);
}