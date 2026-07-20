class Solution {
public:

void getLPS(vector<int> &lps, string &s) {

        int pre = 0, suf = 1;

        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            }
            else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                }
                else {
                    pre = lps[pre - 1];
                }
            }
        }
    }

    bool KMP_MATCH(string &txt, string &pat) {

        vector<int> lps(pat.size(), 0);
        getLPS(lps, pat);

        int first = 0, second = 0;

        while (first < txt.size() && second < pat.size()) {

            if (txt[first] == pat[second]) {
                first++;
                second++;
            }
            else {
                if (second == 0) {
                    first++;
                }
                else {
                    second = lps[second - 1];
                }
            }
        }

        if (second == pat.size()) {
            return true;
        }

        return false;

    }
    int repeatedStringMatch(string a, string b) {
        if(a == b)
        return 1;

        int repeat = 1;
        string temp = a;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        if(KMP_MATCH(temp,b))
        return repeat;

        temp+=a;

        if(KMP_MATCH(temp,b))
        return repeat + 1;

        return -1;
    }
    
};