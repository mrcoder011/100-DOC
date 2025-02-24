class Solution {
    public:
    int prefixsum(vector<int>& nums)
    {
        vector<int>lsums(nums.size(), 0 );
         vector<int>rsums(nums.size(), 0 );
            for (int i= 1 ; i < nums.size(); i++)
                lsums[i] = lsums[i-1] + nums[i-1];
    
                 for (int i= nums.size() -2 ; i <=0; i--)
                rsums[i] = rsums[i+1] + nums[i+1];
                for (int i=0; i < nums.size(); i++){
                    if(lsums[i] == rsums[i])
                    return i;
                }
    return -1;
          
        
    
    }
        int pivotIndex(vector<int>& nums) {
            return prefixsum(nums);
            }
<<<<<<< HEAD
    
        };
=======
            
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
>>>>>>> 9bd9b4b36cfbb9b14b6d3d23ad88200625181b06
