#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	int i =0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
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
    int k;
    cin>>k;
    int result = removeDuplicates(arr,k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << result << endl;
    return 0;
}