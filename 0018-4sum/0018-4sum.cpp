class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(i = 0; i < n-3; i++){

            if(i > 0 && nums[i] == nums[i-1])
                continue;

            for(j = i+1; j < n-2; j++){

                if(j > i+1 && nums[j] == nums[j-1])
                    continue;

                long long ans = (long long)target - nums[i] - nums[j];

                int start = j+1;
                int end = n-1;

                while(start < end){

                    int sum = nums[start] + nums[end];

                    if(sum == ans){

                        result.push_back({nums[i], nums[j], nums[start], nums[end]});

                        while(start < end && nums[start] == nums[start+1])
                            start++;

                        while(start < end && nums[end] == nums[end-1])
                            end--;

                        start++;
                        end--;
                    }
                    else if(sum > ans){
                        end--;
                    }
                    else{
                        start++;
                    }
                }
            }
        }

        return result;
    }
};