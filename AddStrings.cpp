class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<char> v1(num1.begin(), num1.end());
        vector<char> v2(num2.begin(), num2.end());
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        int N = max(v1.size(), v2.size()) + 1;
        v1.resize(N, '0');
        v2.resize(N, '0');

        vector<int> ans(N, 0);
        int carry = 0;
        for(int i=0; i<N; i++)
        {
            int mod = ((v1[i]-'0')+(v2[i]-'0')+carry) % 10;
            carry = ((v1[i]-'0')+(v2[i]-'0')+carry) / 10;
            ans[i] += mod;
        }
        if(ans[N-1] == 0)
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        
        string out = "";
        for(auto e:ans)
            out += to_string(e);

        return string(out.begin(), out.end());
    }
};
