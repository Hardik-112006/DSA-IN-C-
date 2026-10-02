class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest = 0;

        for(int x:st){
        if(st.count(x-1) == 0){
            int curr = x;
            int size = 1;

            while(st.count(curr+1)){
                curr++;
                size++;
            }
            longest = max(longest,size);
        }
        }
        return longest;
    }
};