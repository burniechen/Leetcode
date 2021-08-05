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
    vector<int> path;
    vector<vector<int>> ans;
    void dfs(TreeNode* root, int targetSum)
    {
        if(root == nullptr)
            return;

        path.push_back(root->val);
        targetSum -= root->val;

        if(root->left == nullptr and root->right == nullptr)
            if(targetSum == 0)
                ans.push_back(path);
        else
        {
            dfs(root->left , targetSum);
            dfs(root->right, targetSum);
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
};
