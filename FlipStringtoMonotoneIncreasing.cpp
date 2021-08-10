class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int sum = 0;
        int ans = INT_MAX;
        int N = s.length();
        vector<int> v0{0}, v1{0};
        for(int i=0; i<s.length(); i++)
        {
            sum += (s[i]-'0');
            v1.push_back(sum);
            v0.push_back(i+1-sum);
        }
        for(int i=0; i<=N; i++)
            ans = min(ans, (v0[N]-v0[i])+(v1[i]-v1[0]));
        
        return ans;
    }
};
