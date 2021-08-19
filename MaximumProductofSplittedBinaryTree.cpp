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
    // First, find total
    long long total = 0;
    long long dfs(TreeNode* root) {
        if(root == nullptr)
            return 0;
        return dfs(root->left) + dfs(root->right) + root->val;
    }
    
    //Second, find max and reuse sum of subtree
    long long re = 0;
    long long solve(TreeNode* root) {
        if(root == nullptr)
            return 0;
        long long l = solve(root->left);
        long long r = solve(root->right);
        long long tmp = max((total-l)*l , (total-r)*r);
        re = max(re, tmp);
        
        return l + r + root->val;
    }
    
    int maxProduct(TreeNode* root) {
        total = dfs(root);
        long long tmp = solve(root);
        return re % (int)(1e9+7);
    }
};
