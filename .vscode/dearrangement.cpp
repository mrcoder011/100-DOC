#include <iostream>
#include <vector>
using namespace std;

// Function to calculate derangements using recursion (inefficient)
int solve(int n) {
    // Base cases
    if (n == 0) return 1; // Derangement of an empty set is 1
    if (n == 1) return 0; // No derangement for a single element
    if (n == 2) return 1; // Only one derangement for two elements

    // Recursive formula for derangements
    return (n - 1) * (solve(n - 1) + solve(n - 2));
}

// Optimized function using memoization
int solveMemo(int n, vector<int>& dp) {
    // Base cases
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return 1;

    // If the result is already computed, return it
    if (dp[n] != -1) return dp[n];

    // Compute and store the result in the DP table
    dp[n] = (n - 1) * (solveMemo(n - 1, dp) + solveMemo(n - 2, dp));
    return dp[n];
}

// Iterative function to calculate derangements
int solveIterative(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return 1;

    vector<int> dp(n + 1, -1);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
    }

    return dp[n];
}

int main() {
    int n = 4;

    // Using the recursive approach
    cout << "Recursive: " << solve(n) << endl;

    // Using the memoization approach
    vector<int> dp(n + 1, -1);
    cout << "Memoization: " << solveMemo(n, dp) << endl;

    // Using the iterative approach
    cout << "Iterative: " << solveIterative(n) << endl; 

    return 0;
}
   