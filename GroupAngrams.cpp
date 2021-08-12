class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(auto s:strs)
        {
            auto tmp = s;
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto e:m)
            ans.push_back(e.second);
        return ans;
    }
};
