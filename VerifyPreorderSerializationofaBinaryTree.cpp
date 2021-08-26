class Solution {
public:
    bool isValidSerialization(string preorder) {
        stack<char> s;

        bool flag = true;
        // init null tree
        s.push('h');
        for(auto e:preorder)
        {
            if(e == ',')
            {
                flag = true;
                continue;
            }
			else if(e == '#')
            {
                if(s.empty())
                    return false;
                s.pop();
            }
            else if(flag)
            {
                if(s.empty())
                    return false;
                s.pop();
                s.push('r');
                s.push('l');
                flag = false;
            }
        }
        if(s.empty())
            return true;
        return false;
    }
};
