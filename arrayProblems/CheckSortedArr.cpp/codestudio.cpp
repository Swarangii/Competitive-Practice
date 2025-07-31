#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

int isSorted(int n, vector<int> a) {
    for (int i=1;i<n;i++){
        if(a[i]>=a[i-1]){

        } else return false;
    }
    return true;
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
    int result = isSorted(k,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << result << endl;
    return 0;
}