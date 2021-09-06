class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k > 1) {
            sort(s.begin(), s.end());
            return s;
        }

        int n = s.size();
        string smallest = s;
        while(n > 0) {
            string tmp(s.begin()+1, s.end());
            tmp += s[0];
            s = tmp;
            smallest = min(smallest, s);
            n -= 1;
        }
        return smallest;
    }
};
