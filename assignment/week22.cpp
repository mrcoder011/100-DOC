class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int totalSum = 0, leftSum = 0;
            
            // Compute total sum of the array
            for (int num : nums) {
                totalSum += num;
            }
            
            // Iterate through the array to find the pivot index
            for (int i = 0; i < nums.size(); i++) {
                if (leftSum == totalSum - leftSum - nums[i]) {
                    return i;  // Found pivot index
                }
                leftSum += nums[i];  // Update left sum
            }
            
            return -1;  // No pivot index found
        }
    };
    


// for sorting problems

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin() , nums.end());

    }
};


// new 
#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int>& arr) {
    int totalSum = 0, leftSum = 0;
    for (int num : arr) {
        totalSum += num;
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i; // Pivot index found
        }
        leftSum += arr[i];
    }
    
    return -1; // No pivot index found
}

int main() {
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index: " << findPivot(arr) << endl;
    return 0;
}



// missing number 
#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(vector<int>& nums, int n) {
    int expected_sum = (n * (n + 1)) / 2; // Sum of first N natural numbers
    int actual_sum = 0;

    for (int num : nums) {
        actual_sum += num;
    }

    return expected_sum - actual_sum; // Missing number
}

int main() {
    vector<int> nums = {1, 2, 4, 5, 6}; // Example: Missing number is 3
    int n = nums.size() + 1; // Total numbers including missing one

    cout << "Missing number: " << findMissingNumber(nums, n) << endl;

    return 0;
}
