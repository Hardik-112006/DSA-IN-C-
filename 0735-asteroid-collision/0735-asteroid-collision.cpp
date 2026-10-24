class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int current : asteroids) {
            bool alive = true;

            while (alive && !st.empty() &&
                   st.top() > 0 && current < 0) {
                if (st.top() < -current)
                    st.pop();
                else {
                    if (st.top() == -current) 
                    st.pop();
                    alive = false;
                }
            }

            if (alive) 
            st.push(current);
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};