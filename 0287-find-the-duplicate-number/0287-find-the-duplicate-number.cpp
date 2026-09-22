class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        int n = nums.size();
        int k;

        sort(nums.begin(),nums.end());

        for(i=0;i<n-1;i++){
            
           if(nums[i] == nums[i+1]){
                    k = nums[i];
                }
            
        }
        return k;
    }
};