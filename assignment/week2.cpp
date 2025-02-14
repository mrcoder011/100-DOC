#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();  // Use size() instead of length()

        for (int i = 0; i < n; i++) {  // Fixed condition
            for (int j = i + 1; j < n; j++) {  // Defined `n` before using it
                if (nums[i] + nums[j] == target) {  // Fixed `=` to `==`
                    return {i, j};  // Return indices, not values
                }
            }
        }

        return {};  // Return an empty vector if no solution found
    }
};
