class Solution {
public:
    map<string, int> m;
    // Fibonacci
    int numDecodings(string s) {
        if (m.count(s))
            return m[s];
        if(s[0] == '0')
            return m[s] = 0;
        if(s.size() == 1 or s.size() == 0)
            return m[s] = 1;

        string tmp(s.begin(), s.begin()+2);
        int val = stoi(tmp);
        if(val > 26)
            return m[s] = numDecodings(string(s.begin()+1, s.end()));
        return m[s] = numDecodings(string(s.begin()+1, s.end())) + numDecodings(string(s.begin()+2, s.end()));
    }
};
