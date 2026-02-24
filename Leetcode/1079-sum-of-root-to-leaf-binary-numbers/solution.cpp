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
    int solve(TreeNode* node, int current){
        if(!node){
            return 0;
        }

        current = (current << 1) | node -> val;

        if( !node->left && !node->right){
            return current;
        }

        return solve(node -> left, current) + solve(node -> right, current);
    }

    int sumRootToLeaf(TreeNode* root) {
        return solve(root, 0);
    }
};
