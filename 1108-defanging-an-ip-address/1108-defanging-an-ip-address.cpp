class Solution {
public:
    string defangIPaddr(string address) {
        int i;
        string ans;

        for(i=0;i<address.size();i++){
            if(!isalnum(address[i])){
                ans += "[.]";
            }
            else{
                ans += address[i];
            }
        }
        return ans;
    }
};