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
    
        };