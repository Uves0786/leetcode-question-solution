class Solution {
public:
    string loopCheck(string str) {
        string res = "";
        for(int i=0; i<str.size(); i++) {
            if(str[i] == '#' && !res.empty()) res.erase(res.size()-1);
            else if(str[i]!='#') res = res + str[i];
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return (loopCheck(s) == loopCheck(t)) ? true: false;
    }
};