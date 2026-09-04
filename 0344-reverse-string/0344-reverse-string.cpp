class Solution {
public:

    void rev(vector<char>& str, int start, int end) {
        if(start >= end) {
            return;
        }

        char c = str[start];
        str[start] = str[end];
        str[end] = c;

        rev(str, start + 1, end - 1);
    }

    void reverseString(vector<char>& s) {
        rev(s, 0, s.size() - 1);
    }
};