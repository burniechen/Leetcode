class Solution {
public:
    bool check(string s) {
        vector<int> v(26, 0);
        for(auto e:s) {
						int idx = e-'0'-49;
            v[idx]++;
            if(v[idx] > 1)
                return false;
        }
        return true;
    }
    
    int maxLength(vector<string>& arr) {
        int re = 0;
        for(int val=0; val < (1 << arr.size()); ++val) {
            string tmp = "";
            for(int i=0; i<arr.size(); i++) {
                int bit = (val >> i) & 1;
                if(bit == 1)
                    tmp += arr[i];
            }
            if(check(tmp))
                re = max( (int) tmp.size(), re);
        }
        return re;
    }
};
