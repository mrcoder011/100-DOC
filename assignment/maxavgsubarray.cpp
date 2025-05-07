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