class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
// Example usage
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    int result = solution.findPairs(nums, k);
    cout << "Number of unique pairs with difference " << k << " is: " << result << endl;
    return 0;
}