class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

   // frequency count krne ke liye use hota elements ki
        for(int i:nums){
            mp[i]++;
        }

// ek vector banate hai jisme element, uski frquency rkhte hai
        vector<pair<int,int>> v;

        for(auto it:mp){
            v.push_back({it.first,it.second});
        }

// vector ko sort krta hai unki frequency ke according

        sort(v.begin(), v.end(), [](auto a, auto b) {
            return a.second > b.second;
        });

// top k elements nikalta hai 
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }

        return ans;
    }
};