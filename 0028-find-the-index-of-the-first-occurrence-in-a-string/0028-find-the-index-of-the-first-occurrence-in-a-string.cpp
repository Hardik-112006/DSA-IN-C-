class Solution {
public:

 void getLPS(vector<int>&lps,string &s) {
        // code here
    
    vector<int>Lps(s.size(), 0);

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
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        getLPS(lps,needle);

        int first = 0, second = 0;
        while(first<haystack.size() && second<needle.size()){
            if(haystack[first] == needle[second]){
                second++,first++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second = lps[second-1];
                }
            }
        }
        if(second == needle.size()){
            return first-second;
        }
        return -1;
    }
};