class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {

            vector<int> freq(26, 0);

            // Step 1: Count frequency of each character
            for (char ch : s) {
                freq[ch - 'a']++;
            }

            // Step 2: Convert frequency into a string key
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + "#";
            }

            // Step 3: Group strings using the key
            mp[key].push_back(s);
        }

        // Step 4: Convert hashmap into the answer
        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};