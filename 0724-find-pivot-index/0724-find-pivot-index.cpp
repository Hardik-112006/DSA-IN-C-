class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,j,leftsum=0,rightsum=0;

        for(i=0;i<nums.size();i++){
          rightsum = rightsum + nums[i];
        }

        for(j=0;j<nums.size();j++){
         rightsum  = rightsum - nums[j];
         if(rightsum == leftsum){
            return j;
         }
         leftsum += nums[j];
        }

        return -1;
    }
};