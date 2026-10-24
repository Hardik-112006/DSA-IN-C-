class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int>ans(n,0);
        int i;

        for(i=0;i<n;i++){
           while (!st.empty() &&
                   temperatures[i] > temperatures[st.top()]) {
                int j = st.top();
                st.pop();
                ans[j] = i - j; 
            }
            st.push(i);
        }
        return ans;
    }
};