class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        int tmp = 0;
        for(auto e:nums)
            v.push_back(tmp += e);
    }
    
    int sumRange(int left, int right) {
        left -= 1;
        if(left < 0)
            return v[right];
        return v[right] - v[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
