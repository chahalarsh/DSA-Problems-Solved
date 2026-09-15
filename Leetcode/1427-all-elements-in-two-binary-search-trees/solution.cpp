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

    vector<int> ans;

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        trasverse(root1);
        trasverse(root2);

        sort(ans.begin(), ans.end());
        
        return ans;
    }

    void trasverse(TreeNode* node){
        if(!node){
            return; 
        }
        ans.emplace_back(node -> val);

        trasverse(node -> left);
        trasverse(node -> right);
    }
};
