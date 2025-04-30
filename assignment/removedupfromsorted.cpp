class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            for (int i=1; i<nums.size(); i++){
                for (j = 0; j<nums.size(); j++){
                 
                if(nums[i] == nums[j]){
                    i++;
                }
                else{
                   j++
                }
                }
                
            }
        }
    };