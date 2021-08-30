class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mm=m, nn=n;
        for(auto e:ops) {
            mm = e[0]<mm ? e[0] : mm;
            nn = e[1]<nn ? e[1] : nn;
        }
        return mm*nn;
    }
};
