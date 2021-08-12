class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int, int> m;
        sort(arr.begin(), arr.end());
        for(auto e:arr)
            ++m[e];
        
        for(auto &e:m)
        {
            if(e.second == 0)
                continue;
            int target = e.first<0 ? e.first/2 : e.first*2;
            if(e.first<0 and e.first%2 != 0)
                return false;
            if(e.second > m[target])
                return false;
            m[target] -= e.second;
        }
        
        return true;
    }
};
