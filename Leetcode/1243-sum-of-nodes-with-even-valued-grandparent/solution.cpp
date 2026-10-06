/**
 * Definition for a binary tree node
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int res = 0;

    void dfs(TreeNode* node) {
        if (!node) {
            return;
        }
        if (node->val % 2 == 0) {
            if (node->left != nullptr) {
                if (node->left->left != nullptr) {
                    res += node->left->left->val;
                }
                if (node->left->right != nullptr) {
                    res += node->left->right->val;
                }
            }
            if (node->right != nullptr) {
                if (node->right->left != nullptr) {
                    res += node->right->left->val;
                }
                if (node->right->right != nullptr) {
                    res += node->right->right->val;
                }
            }
        }
        dfs(node->left);
        dfs(node->right);
    }

    int sumEvenGrandparent(TreeNode* root) {
        dfs(root);
        return res;
    }
};
