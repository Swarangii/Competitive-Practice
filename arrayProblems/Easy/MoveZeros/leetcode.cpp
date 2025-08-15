#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

vector<int> moveZeroes(vector<int>& nums) {
        // Optimal Code : 
        // TC-> O(N)
        // SC-> O(1)
        int n=nums.size();
	    int j=-1;
	    for(int i=0;i<n;i++){
		    if(nums[i]==0){
			    j=i;
			    break;
		    }
	    }

	    if(j==-1) return nums;

	    for(int i=j+1 ;i<n;i++){
		    if(nums[i]!=0){
			    swap(nums[i],nums[j]);
			    j++;
		    }
	    }
        return nums;
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
    
    moveZeroes(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << moveZeroes << endl;
    return 0;
}