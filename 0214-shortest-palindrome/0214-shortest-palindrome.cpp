class Solution {
public:
    void getLPS(string &s, vector<int> &lps) {
        int pre = 0, suf = 1;

        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            } else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                } else {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());

        string temp = s + "$" + rev;

        vector<int> lps(temp.size(), 0);
        getLPS(temp, lps);

        int longestPalPrefix = lps.back();
        int remaining = s.size() - longestPalPrefix;

        return rev.substr(0, remaining) + s;
    }
};