class Solution {
public:
    char shift(char c, int offset) {
        int tmp = offset%26 + (c-'0');
        tmp = tmp > 'z'-'0' ? tmp-26 : tmp;
        return tmp + '0';
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        string re = "";
        int acc=0;
        for(int i=s.size()-1; i>=0; i -= 1) {
            acc += shifts[i]%26;
            re.push_back(shift(s[i], acc));
        }
        reverse(re.begin(), re.end());
            
        return re;
    }
};
