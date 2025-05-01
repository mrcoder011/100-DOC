class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int i=1;
            int j = 0;
            while (i< nums.size()){
                if(nums[i] == nums[j]){
                    i++;
    
                }
                else {
                    j++;
                    nums[j]=nums[i];
                    i++;
    
                }
                }
    
    return j+1;
            }
            
    
    };


    // second method
    class Solution {
        public:
            int removeDuplicates(vector<int>& nums) {
                int curr=nums[0];
                int index=1;
                for(int i=1;i<nums.size();i++){
                    if(curr!=nums[i]){
                        curr=nums[i];
                        nums[index]=curr;
                        index++;
                    }
                }
                return index;
            }
        };