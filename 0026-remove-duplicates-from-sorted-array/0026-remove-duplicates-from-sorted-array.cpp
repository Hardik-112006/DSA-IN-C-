class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int start = 0,end = 1;

        
        while(end<nums.size()){
            if(nums[start] != nums[end]){
                start++;
                nums[start] = nums[end];
            }
            else{
                end++;
            }
        }
        return start+1;
    }
};