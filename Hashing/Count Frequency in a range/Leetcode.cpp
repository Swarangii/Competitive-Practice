#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Count Elements With Maximum Frequency on leetcode 

int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        int maxi=0;
        for(auto num:mp){
            maxi=max(maxi,num.second);
            
        }
        for(auto num:mp){
            if(num.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
int main() {
  vector <int> nums;
  maxFrequencyElements(nums);
}