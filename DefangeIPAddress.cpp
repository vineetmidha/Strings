
// https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        string defanged="";
        
        for (auto c: address){
            if (c=='.')
                defanged += "[.]";
            else
                defanged += c;
        }
        
        return defanged;
    }
};
