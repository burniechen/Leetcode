class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> ans;
        vector<int> v;

        sort(nums.begin(), nums.end(), greater<int> ());
        for(int i=0; i<nums.size(); ++i) {
            v = vector<int> ();
            v.push_back(nums[i]);
            for(int j=0; j<nums.size(); ++j) {
                if(j == i)
                    continue;
                else if(nums[j] % nums[i] == 0 or nums[i] % nums[j] == 0)
                    if(nums[j] % v[v.size()-1] == 0 or v[v.size()-1] % nums[j] == 0)
                        v.push_back(nums[j]);
            }

            if(v.size() > ans.size())
                ans = v;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
