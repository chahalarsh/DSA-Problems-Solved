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
    vector<vector<int>> res;

    void dfs(TreeNode* node, int currLvl){
        if(!node){
            return;
        }

        if(currLvl == res.size()){
            res.push_back({});
        }

        res[currLvl].push_back(node -> val);

        dfs(node -> left, currLvl + 1);
        dfs(node -> right, currLvl + 1);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        dfs(root, 0);
        reverse(res.begin(), res.end());
        return res;        
    }

};
