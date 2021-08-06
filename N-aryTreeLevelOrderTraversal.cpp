/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> v;
    int x=-1;
    void dfs(Node* root, int level=0)
    {
        if(level > x)
            x = level, v.push_back({});

        v[level].push_back(root->val);
        if(!root->children.empty())
        {
            level += 1;
            for(auto c:root->children)
                dfs(c, level);
        }
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        if(root == nullptr) 
            return v;
        dfs(root);

        return v;
    }
};
