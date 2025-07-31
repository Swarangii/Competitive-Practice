#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    if(second_large == INT_MIN)
        return -1;
    return second_large;
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Using quick Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cin>>k;
    int result = findSecondLargest(k,arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "The " << k << "-th largest element is: " << result << endl;
    cout << "\n";
    return 0;
}