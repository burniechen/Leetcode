/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max = 0, count = 0;
    vector<int> v;
    void dfs(TreeNode* root) {
        if(root == nullptr)
            return;
        v.push_back(root->val);
        max = *max_element(v.begin(), v.end());
        if(root->val >= max)
            count++;

        dfs(root->left);
        dfs(root->right);
        v.pop_back();
    }
    int goodNodes(TreeNode* root) {
        dfs(root);
        return count;
    }
};
