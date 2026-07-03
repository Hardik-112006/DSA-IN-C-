class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);

        string temp;

        int count=0,i,pos;
        for(i=0;i<s.size();i++){
            if(s[i] == ' '){
                 pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            }
            else{
                temp += s[i];
            }
        }
         pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;

        for(i=1;i<=count;i++){
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back();
        return temp;
    }
};