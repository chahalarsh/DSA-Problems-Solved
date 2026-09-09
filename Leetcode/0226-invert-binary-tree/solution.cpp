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
    TreeNode* invertTree(TreeNode* root) {
        invertNodes(root);
        return root;
    }

    void invertNodes(TreeNode* node){

        if(!node){
            return;
        }

        TreeNode* tmp =  node -> left;

        node -> left = node -> right;
        node -> right = tmp;

        invertNodes(node -> left);
        invertNodes(node -> right);
    }
};
