#include <iostream>
#include <vector>
using namespace std;

// Print Nth Fibonacci Number on GFG

int nthFibonacci(int n) {
        // code here
        vector<int> dp(n+1,-1);
        return solve(n,dp);
        
    }
int solve(int n, vector<int>& dp) {
        if (n <= 1) return n;

        if (dp[n] != -1) return dp[n];  // return memoized result

        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }


int main()
{
        int n;
        cin>>n;
        vector<int> dp(n + 1, -1);   // ✅ Declare dp vector properly
        cout << solve(n, dp); 
}