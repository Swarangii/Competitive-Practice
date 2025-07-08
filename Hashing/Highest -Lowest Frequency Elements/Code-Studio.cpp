#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Highest / Lowest Frequency Elements on Code Studio

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    unordered_map<int, int> mpp;
    
    // Count frequency
    for (int num : v) {
        mpp[num]++;
    }

    int maxFreq = 0, minFreq = INT_MAX;
    int maxElem = INT_MAX, minElem = INT_MAX;

    for (auto it : mpp) {
        int element = it.first;
        int count = it.second;

        // Highest frequency
        if (count > maxFreq || (count == maxFreq && element < maxElem)) {
            maxFreq = count;
            maxElem = element;
        }

        // Lowest frequency
        if (count < minFreq || (count == minFreq && element < minElem)) {
            minFreq = count;
            minElem = element;
        }
    }

    return {maxElem, minElem};
}
int main() {
  vector <int> v;
  getFrequencies(v);
}