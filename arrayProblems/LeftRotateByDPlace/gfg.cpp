#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std;

void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d=d%n;
        int temp[d];
        
        for(int i =0;i<d;i++){
            temp[i]=arr[i];
        }
        
        for(int i =d ;i<n;i++){
            arr[i-d]=arr[i];
        }
        
        for(int i=n-d; i<n; i++){
            arr[i]=temp[i-(n-d)];
        }
    
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
    rotateArr(arr,k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };
    return 0;
}