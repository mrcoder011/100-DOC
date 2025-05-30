class Solution {
    public:
        double bruteforce(vector<int>& nums, int k) {
            double maxAvg = INT_MIN;
            for (int i = 0; i <= nums.size() - k; ++i) {
                int sum = 0;
                for (int j = i; j < i + k; ++j) {
                    sum += nums[j];
                }
                maxAvg = max(maxAvg, sum / (double)k);
            }
            return maxAvg;        
        }
    
        double findMaxAverage(vector<int>& nums, int k) {
            return bruteforce(nums, k);
        }
         
    }

    // new method
    double slidingWindow(vector<int>& nums, int k) {
        double maxAvg = INT_MIN;
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        maxAvg = max(maxAvg, sum / (double)k);
        
        for (int i = k; i < nums.size(); ++i) {
            sum += nums[i] - nums[i - k];
            maxAvg = max(maxAvg, sum / (double)k);
        }
        
        return maxAvg;
    };
    // Example usage
    int main() {
        Solution solution;
        vector<int> nums = {1, 12, -5, -6, 50, 3};
        int k = 4;
        double result = solution.findMaxAverage(nums, k);
        cout << "Maximum average subarray of length " << k << " is: " << result << endl;
        return 0;
    };
   