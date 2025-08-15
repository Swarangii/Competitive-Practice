#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

vector<int> pushZerosAtEnd(vector<int> &arr) 
{
	// Optimal Code --
	int n=arr.size();
	int j=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			j=i;
			break;
		}
	}

	if(j==-1) return arr;

	for(int i=j+1 ;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[j]);
			j++;
		}
	}
	return arr;
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
    pushZerosAtEnd(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << pushZerosAtEnd << endl;
    return 0;
}