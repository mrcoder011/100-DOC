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
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
// new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
// new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int > ans ;
        ans.push_back(1);
        int carry = 0 ;
        for (int i = 2; i <= n; i++){
            for (int j = 0 ; j< ans.size(); j++){
                int x = ans[j]*i + carry ;
                ans[j] = x%10;
                  
                carry  = x/10;
                
            }
            while(carry ){
                ans.push_back(carry %10);
                carry/=10;
                
            }
           
        }
     //for (int e:ans){
       //   cout << e<< " ";
     //}
     //cout << endl;
     reverse(ans.begin(), ans.end());
     
        return ans;
    }
};
// new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
    // new method
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    };
