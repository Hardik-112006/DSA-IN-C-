class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<string> st;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                char num = board[r][c];

                if (num == '.') {
                    continue;
                }

                int box = (r / 3) * 3 + c / 3;

                string rowKey = string(1, num) + " in row " + to_string(r);
                string colKey = string(1, num) + " in col " + to_string(c);
                string boxKey = string(1, num) + " in box " + to_string(box);

                if (st.count(rowKey) ||
                    st.count(colKey) ||
                    st.count(boxKey)) {
                    return false;
                }

                st.insert(rowKey);
                st.insert(colKey);
                st.insert(boxKey);
            }
        }

        return true;
    }
};